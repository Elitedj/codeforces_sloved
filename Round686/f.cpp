#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 1e9 + 7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5 + 5;
 
int t;
 
int n;
int a[maxn], tree[maxn<<2];
 
void build(int p, int l, int r) {
    if (l == r) {
        tree[p] = a[l];
        return;
    }
    int mid = (l + r) >> 1;
    build(p<<1, l, mid);
    build(p<<1|1, mid + 1, r);
    tree[p] = min(tree[p<<1], tree[p<<1|1]);
}
 
int query(int p, int l, int r, int x, int y) {
    if (x <= l && r <= y) return tree[p];
    int mid = (l + r) >> 1;
    int res = inf;
    if (x <= mid) res = min(res, query(p<<1, l, mid, x, y));
    if (y > mid) res = min(res, query(p<<1|1, mid + 1, r, x, y));
    return res;
}
 
void slove() { 
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    vector<int> premax(n + 1, -inf);
    for (int i = 1; i <= n; i++) premax[i] = max(premax[i - 1], a[i]);
    int sufmax = -inf;
    for (int i = n; i >= 2; i--) {
        sufmax = max(sufmax, a[i]);
        int l = lower_bound(premax.begin() + 1, premax.begin() + i - 1, sufmax) - premax.begin();
        int r = upper_bound(premax.begin() + 1, premax.begin() + i - 1, sufmax) - premax.begin();
        int low = l;
        if (l >= r) continue;
        // cout << i << "--->" << l << ' ' << r << '\n';
        while (l < r) {
            int mid = (l + r) >> 1;
            if (mid == i || query(1, 1, n, mid, i - 1) < sufmax) l = mid + 1;
            else r = mid;
        }
        // cout << i << "===>" << l << ' ' << r << '\n';
        if (l == low) l++;
        if (l < i && query(1, 1, n, l, i - 1) == sufmax) {
            cout << "YES\n";
            cout << l - 1 << ' ' << i - l << ' ' << n - i + 1 << '\n';
            return;
        }
    }
    cout << "NO\n";
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

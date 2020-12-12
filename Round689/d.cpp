#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout << "--->" << (x) << '\n';
const double eps = 1e-9;
const double PI = acos(-1);
const ll mod = 1e9 + 7;
const int maxn = 2e5 + 5;
 
int t;
 
ll a[maxn];
ll pre[maxn];
void fun(set<ll> &ans, int l, int r) {
    if (l == r) {
        ans.insert(a[l]);
        return;
    }
    ans.insert(pre[r] - pre[l - 1]);
    ll mid = (a[l] + a[r]) / 2;
    if (a[l] > mid || mid >= a[r]) return;
    int pos = upper_bound(a + l, a + r + 1, mid) - a;
    pos--;
    if (l <= pos) fun(ans, l, pos);
    if (r > pos) fun(ans, pos + 1, r);
}
void slove() {
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++) pre[i] = pre[i - 1] + a[i];
    set<ll> ans;
    fun(ans, 1, n);
    while (q--) {
        ll x;
        cin >> x;
        if (ans.count(x)) cout << "Yes\n";
        else cout << "No\n";
    }
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

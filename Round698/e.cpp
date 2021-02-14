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
 
int T;
 
char s[maxn], t[maxn];
int n, q;
int l[maxn], r[maxn];
int tree[maxn << 2], lazy[maxn << 2];
void push_down(int p, int l, int r) {
    if (lazy[p] == -1) return;
    int mid = (l + r) >> 1;
    lazy[p << 1] = lazy[p << 1 | 1] = lazy[p];
    tree[p << 1] = (mid - l + 1) * lazy[p];
    tree[p << 1 | 1] = (r - mid) * lazy[p];
    lazy[p] = -1;
}
void build(int p, int l, int r) {
    lazy[p] = -1;
    if (l == r) {
        tree[p] = t[l] - '0';
        return;
    }
    int mid = (l + r) >> 1;
    build(p << 1, l, mid);
    build(p << 1 | 1, mid + 1, r);
    tree[p] = tree[p << 1] + tree[p << 1 | 1];
}
void update(int p, int l, int r, int x, int y, int v) {
    if (x <= l && r <= y) {
        tree[p] = (r - l + 1) * v;
        lazy[p] = v;
        return;
    }
    int mid = (l + r) >> 1;
    push_down(p, l, r);
    if (mid >= x) update(p << 1, l, mid, x, y, v);
    if (y > mid) update(p << 1 | 1, mid + 1, r, x, y, v);
    tree[p] = tree[p << 1] + tree[p << 1 | 1];
}
int query(int p, int l, int r, int x, int y) {
    if (x <= l && r <= y) return tree[p];
    int mid = (l + r) >> 1;
    push_down(p, l, r);
    int res = 0;
    if (mid >= x) res += query(p << 1, l, mid, x, y);
    if (mid < y) res += query(p << 1 | 1, mid + 1, r, x, y);
    return res;   
}
void slove() {
    scanf("%d %d %s %s", &n, &q, s + 1, t + 1);
    for (int i = 1; i <= q; i++) scanf("%d%d", &l[i], &r[i]);
    build(1, 1, n);
    for (int i = q; i; i--) {
        int sum = query(1, 1, n, l[i], r[i]);
        if (sum == r[i] - l[i] + 1 - sum) {
            cout << "NO\n";
            return;
        }
        update(1, 1, n, l[i], r[i], sum > r[i] - l[i] + 1 - sum);
    }
    for (int i = 1; i <= n; i++) {
        if (query(1, 1, n, i, i) + '0' != s[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    // IO;
    T = 1;
    // cin >> T;
    scanf("%d", &T);
    while (T--) slove();
    return 0;
}

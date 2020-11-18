#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5 + 5;
 
int a[maxn];
int mx[maxn<<2], mi[maxn<<2], len[maxn<<2], lazy[maxn<<2];
ll sum[maxn<<2];
 
void pushup(int p, int l, int r) {
    sum[p] = sum[p<<1] + sum[p<<1|1];
    mx[p] = max(mx[p<<1], mx[p<<1|1]);
    mi[p] = min(mi[p<<1], mi[p<<1|1]);
    len[p] = r - l + 1;
}
 
void pushdown(int p, int l, int r) {
    if (l != r && lazy[p] != 0) {
        int x = lazy[p];
        lazy[p<<1] = lazy[p<<1|1] = x;
        mx[p<<1] = mx[p<<1|1] = mi[p<<1] = mi[p<<1|1] = x;
        sum[p<<1] = 1ll * len[p<<1] * x;
        sum[p<<1|1] = 1ll * len[p<<1|1] * x;
    }
    lazy[p] = 0;
}
 
void build(int p, int l, int r) {
    if (l == r) {
        sum[p] = a[l];
        mx[p] = mi[p] = a[l];
        len[p] = 1;
        return;
    }
    int mid = (l + r) >> 1;
    build(p<<1, l, mid);
    build(p<<1|1, mid + 1, r);
    pushup(p, l, r);
}
 
void update(int p, int l, int r, int x, int y, int v) {
    if (r < x || l > y) return;
    if (mi[p] >= v) return;
    if (x <= l && r <= y && mx[p] < v) {
        lazy[p] = v;
        mi[p] = mx[p] = v;
        sum[p] = 1ll * len[p] * v;
        return;
    }
    pushdown(p, l, r);
    int mid = (l + r) >> 1;
    update(p<<1, l, mid, x, y, v);
    update(p<<1|1, mid + 1, r, x, y, v);
    pushup(p, l, r);
}
 
int buy(int p, int l, int r, int x, int y, int &v) {
    pushdown(p, l, r);
    if (l == x && r == y) {
        if (v >= sum[p]) {
            v -= sum[p];
            return len[p];
        }
        if (mi[p] > v) return 0;
        int mid = (l + r) >> 1;
        int d1 = buy(p<<1, l, mid, x, mid, v);
        int d2 = buy(p<<1|1, mid + 1, r, mid + 1, y, v);
        return d1 + d2;
    }
    int mid = (l + r) >> 1;
    if (y <= mid) {
        return buy(p<<1, l, mid, x, y, v);
    } else if (x > mid) {
        return buy(p<<1|1, mid + 1, r, x, y, v);
    } else {
        int d1 = buy(p<<1, l, mid, x, mid, v);
        int d2 = buy(p<<1|1, mid + 1, r, mid + 1, y, v);
        return d1 + d2;
    }
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    int n, q;
    cin >> n >> q;
    for (int i=1; i<=n; i++) cin >> a[i];
    build(1, 1, n);
    while (q--) {
        int op, x, y;
        cin >> op >> x >> y;
        if (op == 1) update(1, 1, n, 1, x, y);
        else cout << buy(1, 1, n, x, n, y) << '\n';
    }
    return 0;
}

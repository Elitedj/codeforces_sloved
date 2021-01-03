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
const int maxn = 5e5 + 5;

int T;

int fa[maxn];

int find(int x) {
    int k = x;
    while (fa[k] != k) k = fa[k];
    while (fa[x] != x) {
        int tmp = x;
        x = fa[x];
        fa[tmp] = k;
    }
    return k;
}

int join(int x, int y) {
    x = find(x);
    y = find(y);
    fa[x] = y;
    return x != y;
}

ll kpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

void slove() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m + 1; i++) fa[i] = i;
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        if (k == 1) {
            int x, y = m + 1;
            cin >> x;
            if (join(x, y)) ans.push_back(i);
        } else {
            int x, y;
            cin >> x >> y;
            if (join(x, y)) ans.push_back(i);
        }
    }
    cout << kpow(2, 1ll * ans.size()) << ' ' << ans.size() << '\n';
    for (auto v : ans) cout << v << ' ';
    cout << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    // cin >> T;
    while (T--) slove();
    return 0;
}

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

set<pair<int, int>> s[maxn];
map<int, int> t[maxn];
vector<pair<int, int>> vp[maxn];
int curr[maxn];
ll ans = 1;
int n, q;
void mul(int i, int p, int r) {
    if (t[p].count(i)) {
        s[p].erase({t[p][i], i});
        r += t[p][i];
    }
    t[p][i] = r;
    s[p].insert({r, i});
    int nextr = (int)s[p].size() == n ? s[p].begin()->first : 0;
    while (curr[p] < nextr) {
        curr[p]++;
        ans = ans * p % mod;
    }
}
void slove() {
    for (int i = 2; i < maxn; i++) {
        if (vp[i].empty()) {
            for (int j = i; j < maxn; j += i) {
                vp[j].push_back({i, 0});
                for (int k = j; k % i == 0; k /= i) vp[j].back().second++;
            }
        }
    }
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        for (auto v : vp[x]) {
            mul(i, v.first, v.second);
        }
    }
    while (q--) {
        int i, x;
        cin >> i >> x;
        for (auto v : vp[x]) {
            mul(i, v.first, v.second);
        }
        cout << ans << '\n';
    }
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    // cin >> T;
    while (T--) slove();
    return 0;
}

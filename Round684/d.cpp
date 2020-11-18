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
const int maxn = 1e5 + 5;
 
 
vector<int> g[maxn];
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        for (int i=1; i<=n; i++) g[i].clear();
        for (int i=1; i<=m; i++) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vector<int> deg(n + 1), vis(n + 1, 0);
        queue<int> que;
        for (int i=1; i<=n; i++) {
            sort(g[i].begin(), g[i].end());
            deg[i] = (int)g[i].size();
            if (deg[i] < k) {
                que.push(i);
                vis[i] = 1;
            }
        }
        vector<int> clique;
        while (!que.empty()) {
            int u = que.front();
            que.pop();
            vis[u] = 2;
            if (deg[u] == k - 1 && clique.empty() && 1ll * k * (k - 1) / 2 <= m) {
                clique.push_back(u);
                for (auto v:g[u]) {
                    if (vis[v] <= 1) clique.push_back(v);
                }
                int ok = 1;
                for (auto k:clique) {
                    for (auto kk:clique) {
                        if (k == kk) break;
                        if (!binary_search(g[k].begin(), g[k].end(), kk)) {
                            ok = 0;
                            break;
                        }
                    }
                    if (!ok) break;
                }
                if (!ok) clique.clear();
            }
            for (auto v:g[u]) {
                if (--deg[v] < k && !vis[v]) {
                    que.push(v);
                    vis[v] = 1;
                }
            }
        }
 
        if (count(vis.begin() + 1, vis.end(), 0) > 0) {
            vector<int> ans;
            for (int i=1; i<=n; i++) {
                if (!vis[i]) ans.push_back(i);
            }
            cout << 1 << ' ' << ans.size() << '\n';
            for (auto v:ans) cout << v << ' ';
            cout << '\n';
        } else if (!clique.empty()) {
            cout << 2 << '\n';
            for(auto v:clique) {
                cout << v << ' ';
            }
            cout << '\n';
        } else cout << "-1\n";
    }
    return 0;
}

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
 
vector<int> g[maxn];
 
void slove() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) g[i].clear();
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }
    vector<int> dis(n + 1, -1);
    vector<int> que;
    que.push_back(1);
    dis[1] = 0;
    for (int i = 0; i < n; i++) {
        int u = que[i];
        for (auto v : g[u]) {
            if (dis[v] == -1) {
                dis[v] = dis[u] + 1;
                que.push_back(v);
            }
        }
    }
    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        ans[i] = dis[i];
        for (auto v : g[i]) {
            ans[i] = min(ans[i], dis[v]);
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        int u = que[i];
        for (auto v : g[u]) {
            if (dis[v] > dis[u]) {
                ans[u] = min(ans[u], ans[v]);
            }
        }
    }
    for (int i = 1; i <= n; i++) cout << ans[i] << ' ';
    cout << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 1e9 + 7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 3e5 + 5;
 
int t;
 
int n, m, k;
 
int dis[1005][1005];
 
vector<P> g[1005];
 
void dij(int s) {
	for (int i=1; i<=n; i++) dis[s][i] = inf;
	dis[s][s] = 0;
	priority_queue<P> q;
	q.push(P(s, 0));
	while (!q.empty()) {
		P p = q.top();
		q.pop();
		int u = p.first;
		if (dis[s][u] < p.second) continue;
		for (auto v:g[u]) {
			if (dis[s][v.first] > dis[s][u] + v.second) {
				dis[s][v.first] = dis[s][u] + v.second;
				q.push(P(v.first, dis[s][v.first]));
			}
		}
	}
}
 
vector<P> ask;
 
void slove() {
	cin >> n >> m >> k;
	for (int i=1; i<=m; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		g[u].push_back(P(v, w));
		g[v].push_back(P(u, w));
	}
	for (int i=1; i<=n; i++) dij(i);
	ll ans = 0;
	for (int i=1; i<=k; i++) {
		int x, y;
		cin >> x >> y;
		ans += dis[x][y];
		ask.push_back(P(x, y));
	}
	for (int u=1; u<=n; u++) {
		for (auto a:g[u]) {
			int v = a.first;
			ll cur = 0;
			for (int i=0; i<k; i++) {
				cur += min(dis[ask[i].first][ask[i].second], min(dis[ask[i].first][u] + dis[v][ask[i].second], dis[ask[i].first][v] + dis[u][ask[i].second]));
			}
			ans = min(ans, cur);
		}
	}
	cout << ans << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	// cin >> t;
	while (t--) slove();
	return 0;
}

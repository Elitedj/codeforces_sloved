#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 3e5 + 5;
 
P s, t;
P a[maxn];
vector<P> g[maxn];
vector<P> x, y;
 
ll dij(int n) {
	vector<ll> dis(n+1, INF);
	dis[0] = 0;
	priority_queue<P, vector<P>, greater<P> > que;
	que.push(P(0, 0));
	while (!que.empty()) {
		P p = que.top();
		que.pop();
		int u = p.second;
		if (p.first > dis[u]) continue;
		for (int i=0; i<(int)(g[u].size()); i++) {
			int v = g[u][i].second;
			int w = g[u][i].first;
			if (dis[v] > dis[u] + w) {
				dis[v] = dis[u] + w;
				que.push(P(dis[v], v));
			}
		}
	}
	// for (auto v:dis) cout << v << ' ';
	// cout << '\n';
	return dis[n];
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	// freopen("myout.txt", "w", stdout);
	IO;
	int n, m;
	cin >> n >> m;
	cin >> s.first >> s.second >> t.first >> t.second;
	for (int i=1; i<=m; i++) {
		cin >> a[i].first >> a[i].second;
	}
	a[0] = s;
	a[m + 1] = t;
	for (int i=1; i<=m+1; i++) {
		g[0].push_back(P(abs(s.first - a[i].first) + abs(s.second - a[i].second), i));
	}
	for (int i=0; i<=m; i++) {
		g[i].push_back(P(abs(t.first - a[i].first) + abs(t.second - a[i].second), m + 1));
	}
	for (int i=0; i<=m; i++) {
		x.push_back(P(a[i].first, i));
		y.push_back(P(a[i].second, i));
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	for (int i=1; i<=m; i++) {
		ll dx = x[i].first - x[i - 1].first;
		ll dy = y[i].first - y[i - 1].first;
		int x1 = x[i].second, x2 = x[i - 1].second;
		int y1 = y[i].second, y2 = y[i - 1].second;
		g[x1].push_back(P(dx, x2));
		g[x2].push_back(P(dx, x1));
		g[y1].push_back(P(dy, y2));
		g[y2].push_back(P(dy, y1));
	}
	cout << dij(m+1) << '\n';
	return 0;
}

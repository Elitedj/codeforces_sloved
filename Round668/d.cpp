#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5+5;
 
 
int t;
 
int n;
vector<int> g[maxn];
int bfs1() {
	vector<int> vis(n+1, 0);
	queue<P> q;
	q.push(P(1, 0));
	vis[1] = 1;
	int res = 1, dis = 0;
	while(!q.empty()) {
		P p = q.front();
		q.pop();
		int u = p.first;
		int d = p.second;
		for (auto v:g[u]) {
			if (vis[v]) continue;
			vis[v] = 1;
			q.push(P(v, d+1));
			if (d+1 > dis) {
				dis = d+1;
				res = v;
			}
		}
	}
	return res;
}
 
int bfs2(int x) {
	vector<int> vis(n+1, 0);
	queue<P> q;
	q.push(P(x, 0));
	vis[x] = 1;
	int res = x, dis = 0;
	while(!q.empty()) {
		P p = q.front();
		q.pop();
		int u = p.first;
		int d = p.second;
		for (auto v:g[u]) {
			if (vis[v]) continue;
			vis[v] = 1;
			q.push(P(v, d+1));
			if (d+1 > dis) {
				dis = d+1;
				res = v;
			}
		}
	}
	return dis;
}
 
int bfs3(int a, int b) {
	vector<int> vis(n+1, 0);
	queue<P> q;
	q.push(P(a, 0));
	vis[a] = 0;
	while (!q.empty()) {
		P p = q.front();
		q.pop();
		int u = p.first;
		int d = p.second;
		for (auto v:g[u]) {
			if (vis[v]) continue;
			vis[v] = 1;
			if (v == b) {
				return d+1;
			}
			q.push(P(v, d+1));
		}
	}
	return 0;
}
 
void slove() {
	int a, b, da, db;
	cin >> n >> a >> b >> da >> db;
	for (int i=1; i<=n; i++) g[i].clear();
	for (int i=1; i<n; i++) {
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int maxd = bfs2(bfs1());
	if (2 * da >= maxd) {
		cout << "Alice\n";
		return;
	}
 
	if (db <= 2*da) {
		cout << "Alice\n";
		return;
	}
	
	if (bfs3(a, b) <= da) {
		cout << "Alice\n";
		return;
	}
 
	cout << "Bob\n";
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

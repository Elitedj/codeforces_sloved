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
const int maxn = 1e5+5;
 
 
int t;
 
vector<int> g[maxn];
int sz[maxn];
int n, rt, frt, p1, p2;
 
void dfs(int x, int fa) {
	int mx = 0;
	sz[x] = 1;
	for (auto v:g[x]) {
		if (v == fa) continue;
		dfs(v, x);
		sz[x] += sz[v];
		mx = max(mx, sz[v]);
	}
	if (sz[x]*2 >= n && mx * 2 < n) {
		rt = x;
		frt = fa;
	}
}
 
void dfs2(int x, int fa) {
	if (g[x].size() == 1) {
		p1 = x;
		p2 = fa;
	}
	for (auto v:g[x])
		if (v != fa)
			dfs2(v, x);
}
 
void slove() {
	cin >> n;
	for (int i=1; i<=n; i++) g[i].clear();
	for (int i=1; i<n; i++) {
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	dfs(1, 0);
	if (rt == 1) {
		cout << 1 << ' ' << g[1][0] << '\n';
		cout << 1 << ' ' << g[1][0] << '\n';
	} else {
		dfs2(frt, rt);
		cout << p1 << ' ' << p2 << '\n';
		cout << p1 << ' ' << rt << '\n';
	}
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

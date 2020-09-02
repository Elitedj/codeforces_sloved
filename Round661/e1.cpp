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
 
int t, n;
ll S, tot;
vector<P> mp[maxn];
int lev[maxn];
 
struct edge {
	ll k, w;
	bool operator <(const edge &it) const {
		return k * (w - w / 2) < it.k * (it.w - it.w / 2);
	}
	edge(ll kk = 0, ll ww = 0) {
		k = kk; w = ww;
	}
};
 
priority_queue<edge> pq;
 
void init() {
	for (int i=1; i<=n; i++) {
		mp[i].clear();
		lev[i] = 0;
	}
	tot = 0;
	while (!pq.empty()) pq.pop();
}
 
void dfs(int x, int fa) {
	bool f = false;
	for (auto v:mp[x]) {
		if (v.first == fa) continue;
		f = true;
		dfs(v.first, x);
		pq.push(edge(lev[v.first], v.second));
		tot += 1ll * lev[v.first] * v.second;
		lev[x] += lev[v.first];
	}
	if (!f) lev[x] = 1;
}
 
void slove() {
	cin >> n >> S;
	init();
	for (int i=1; i<n; i++) {
		int u, v;
		ll w;
		cin >> u >> v >> w;
		mp[u].push_back(P(v, w));
		mp[v].push_back(P(u, w));
	}
	dfs(1, -1);
	int ans = 0;
	while (tot > S) {
		edge cur = pq.top();
		pq.pop();
		ll curk = cur.k, curw = cur.w;
		tot -= curk * (curw - curw / 2);
		curw /= 2;
		ans++;
		pq.push(edge(curk, curw));
	}
	cout << ans << '\n';
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

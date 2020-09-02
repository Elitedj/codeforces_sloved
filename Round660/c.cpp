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
int h[maxn], p[maxn], sum[maxn], good[maxn];
vector<vector<int> > mp;
int ok;
void dfs(int x, int pre) {
	ll sgood = 0;
	sum[x] = p[x];
	int sz = mp[x].size();
	for (int i=0; i<sz; i++) {
		if (mp[x][i] == pre) continue;
		dfs(mp[x][i], x);
		sgood += good[mp[x][i]];
		sum[x] += sum[mp[x][i]];
	}
	if ((h[x] + sum[x]) %2 != 0) ok = 0;
	good[x] = (h[x] + sum[x]) / 2;
	if (good[x] > sum[x]) ok = 0;
	if (good[x] < sgood) ok = 0;
}
void slove() {
	int n, m;
	cin >> n >> m;
	for (int i=1; i<=n; i++) cin >> p[i];
	for (int i=1; i<=n; i++) cin >> h[i];
	mp = vector<vector<int> > (n+1);
	for (int i=1; i<n; i++) {
		int u, v;
		cin >> u >> v;
		mp[u].push_back(v);
		mp[v].push_back(u);
	}
	ok = 1;
	dfs(1, 0);
	if (ok) cout << "YES\n";
	else cout << "NO\n";
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

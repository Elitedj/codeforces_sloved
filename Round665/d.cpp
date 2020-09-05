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
 
int n;
vector<int> g[maxn];
vector<ll> v;
 
int dfs(int x, int fa) {
	int sum = 1;
	for(auto u:g[x]) {
		if (u == fa) continue;
		int tmp = dfs(u, x);
		sum += tmp;
		v.push_back(1ll * tmp * (n - tmp));
	}
	return sum;
}
 
void slove() {
	cin >> n;
	for (int i=1; i<=n; i++) g[i].clear();
	v.clear();
	for (int i=1; i<n; i++) {
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	dfs(1, 0);
	sort(v.begin(), v.end());
	int m;
	cin >> m;
	vector<ll> p;
	for (int i=1; i<=m; i++) {
		ll x;
		cin >> x;
		p.push_back(x);
	}
	sort(p.begin(), p.end());
	ll ans = 0;
	n--;
	if (n >= m) {
		for (int i=0; i<n-m; i++)
			ans = (ans + v[i]) %mod;
		for (int i=0; i<m; i++)
			ans = (ans + (v[n-m+i] * p[i]) % mod) % mod;
	} else {
		for (int i=n; i<m; i++)
			p[n-1] = (p[n-1] * p[i]) %mod;
		for (int i=0; i<n; i++)
			ans = (ans + (v[i] * p[i]) % mod) % mod;
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

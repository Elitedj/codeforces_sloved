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
 
ll val[maxn], leaf[maxn], dp[maxn];
 
vector<int> g[maxn];
 
void dfs(int x) {
	if (g[x].size() == 0) leaf[x] = 1;
	for (auto v:g[x]) {
		dfs(v);
		val[x] += val[v];
		leaf[x] += leaf[v];
		dp[x] = max(dp[x], dp[v]);
	}
	dp[x] = max(dp[x], (val[x] + leaf[x] - 1) / leaf[x]);
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	int n;
	cin >> n;
	for (int i=2; i<=n; i++) {
		int x;
		cin >> x;
		g[x].push_back(i);
	}
	for (int i=1; i<=n; i++) cin >> val[i];
	dfs(1);
	cout << dp[1] << '\n';
	return 0;
}

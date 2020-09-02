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
vector<int> e[maxn], order, backlink;
ll a[maxn], b[maxn];
ll ans;
void dfs(int x) {
	for (int v:e[x]) {
		dfs(v);
		if (a[v] >= 0)
			a[x] += a[v];
	}
	ans += a[x];
	if (a[x] >= 0) order.push_back(x);
	else backlink.push_back(x);
}
 
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	for (int i=1; i<=n; i++) {
		cin >> b[i];
		if (b[i] != -1)
			e[b[i]].push_back(i);
	}
	for (int i=1; i<=n; i++) {
		if (b[i] == -1) {
			dfs(i);
			reverse(backlink.begin(), backlink.end());
			for (int x:backlink)
				order.push_back(x);
			backlink.clear();
		}
	}
	cout << ans << '\n';
	for (int v:order)
		cout << v << ' ';
	cout << '\n';
}
 
int main() {
	t = 1;
	//cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

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
const int maxn = 1e5 + 5;
 
int t;
char mp[350][350];
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) cin >> mp[i][j];
	}
	vector<P> ans;
	if (mp[1][2] == mp[2][1]) {
		if (mp[n][n-1] == mp[1][2]) ans.push_back(P(n, n-1));
		if (mp[n-1][n] == mp[1][2]) ans.push_back(P(n-1, n));
	} else if (mp[n-1][n] == mp[n][n-1]) {
		if (mp[1][2] == mp[n][n-1]) ans.push_back(P(1, 2));
		if (mp[2][1] == mp[n][n-1]) ans.push_back(P(2, 1));
	} else {
		ans.push_back(P(1, 2));
		mp[1][2] = mp[2][1];
		if (mp[n][n-1] == mp[1][2]) ans.push_back(P(n, n-1));
		if (mp[n-1][n] == mp[1][2]) ans.push_back(P(n-1, n));
	}
	cout << ans.size() << '\n';
	for (auto v:ans) cout << v.first << ' ' << v.second << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

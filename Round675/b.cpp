#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e6 + 5;
 
 
int t;
 
ll mp[105][105];
 
void slove() {
	int n, m;
	cin >> n >> m;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			cin >> mp[i][j];
		}
	}
	ll ans = 0;
	for (int i=1; i<=(n+1)/2; i++) {
		for (int j=1; j<=(m+1)/2; j++) {
			if (i != n - i + 1 && j != m - j + 1) {
				vector<ll> a;
				a.push_back(mp[i][j]);
				a.push_back(mp[n-i+1][j]);
				a.push_back(mp[i][m-j+1]);
				a.push_back(mp[n-i+1][m-j+1]);
				sort(a.begin(), a.end());
				ans += abs(mp[i][j] - a[1]);
				ans += abs(mp[n-i+1][j] - a[1]);
				ans += abs(mp[i][m-j+1] - a[1]);
				ans += abs(mp[n-i+1][m-j+1] - a[1]);
			} else if (i == n - i + 1 && j != m - j + 1) {
				ans += abs(mp[i][j] - mp[i][m-j+1]);
			} else if (i != n - i + 1 && j == m - j + 1) {
				ans += abs(mp[i][j] - mp[n-i+1][j]);
			} else continue;
		}
	}
	cout << ans << '\n';
}
 
 
int main() {
	// freopen("in.txt", "r", stdin);
	// freopen("myout.txt", "w", stdout);
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

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
 
int a[maxn], dp[maxn][2];
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
		dp[i][0] = dp[i][1] = inf;
	}
	dp[0][1] = inf;
	for (int i=0; i<n; i++) {
		if (dp[i][0] != inf) {
			dp[i+1][1] = min(dp[i+1][1], dp[i][0] + a[i+1]);
			dp[i+2][1] = min(dp[i+2][1], dp[i][0] + a[i+1] + a[i+2]);
		}
		if (dp[i][1] != inf) {
			dp[i+1][0] = min(dp[i+1][0], dp[i][1]);
			dp[i+2][0] = min(dp[i+2][0], dp[i][1]);
		}
	}
	cout << min(dp[n][0], dp[n][1]) << '\n';
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

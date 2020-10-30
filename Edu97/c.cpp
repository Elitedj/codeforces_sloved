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
const int maxn = 2e5 + 5;
 
int t;
int a[maxn];
int dp[500][500];
 
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	for (int i=0; i<=(n<<1); i++)
		for (int j=0; j<=n; j++)
			dp[i][j] = inf;
	dp[0][0] = 0;
	for (int i=0; i<=(n<<1); i++) {
		for (int j=0; j<=n; j++) {
			if (dp[i][j] < inf) {
				dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
				if (j + 1 <= n) {
					dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + abs(a[j + 1] - (i + 1)));
				}
			}
		}
	}
	int ans = inf;
	for (int i=1; i<=(n<<1); i++) ans = min(ans, dp[i][n]);
	cout << ans << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	cin >> t;
	while (t--) slove();
	return 0;
}

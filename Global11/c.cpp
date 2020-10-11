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
const int maxn = 1e6 + 5;
 
int t;
 
void slove() {
	int r, n;
	cin >> r >> n;
	vector<int> t(n + 1), x(n + 1), y(n + 1), dp(n + 1), pref(n + 1);
	t[0] = dp[0] = pref[0] = 0;
	x[0] = y[0] = 1;
	for (int i=1; i<=n; i++) {
		cin >> t[i] >> x[i] >> y[i];
		dp[i] = -1 * n;
		for (int j=i-1; j>=0; j--) {
			if (t[i] - t[j] >= 2 * (r - 1)) {
				dp[i] = max(dp[i], pref[j] + 1);
				break;
			}
			if (t[i] - t[j] >= abs(x[i] - x[j]) + abs(y[i] - y[j]))
				dp[i] = max(dp[i], dp[j] + 1);
		}
		pref[i] = max(pref[i-1], dp[i]);
	}
	cout << pref[n] << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	// freopen("myout.txt", "w", stdout);
	t = 1;
	// cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

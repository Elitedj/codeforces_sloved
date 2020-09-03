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
const int maxn = 1e6+5;

int t;
string mp[maxn];
ll dp[maxn][8];
int a[10];
// 判断前一列与当前列是否符合规则
int check(int pre, int cur, int up) {
	a[0] = 0;
	for (int i=0; i<up; i++)
		a[i+1] = a[i] + (pre>>i&1) + (cur>>i&1);
	for (int i=2; i<=up; i++)
		if (!((a[i] - a[i-2])&1))
			return 0;
	return 1;
}

void slove() {
	int n, m;
	cin >> n >> m;
	for (int i=1; i<=n; i++) {
		string s;
		cin >> s;
		s = '*' + s;
		mp[i] = s;
	}
	if (n == 1) cout << "0\n";
	else if (n > 3) cout << "-1\n"; // 4由4个2组成，所以肯定不符合条件
	else {
		// 对列进行暴力状压，n最大为3，最多才8种情况
		ll ans = INF;
		int MAX = 1<<n;
		for (int i=1; i<=m; i++) {
			for (int j=0; j<MAX; j++)
				dp[i][j] = INF;
		}
		for (int i=1; i<=m; i++) {
			for (int k=0; k<MAX; k++) { // 状压
				int sum = 0;
				// 统计当前列变为k这个状态需要改变的次数
				for (int j=1; j<=n; j++) {
					sum += ((mp[j][i] - '0') != (k>>(j-1)&1));
				}
				if (i > 1) {
					// 结合前一列的所有状态，找一个最小值
					for (int j=0; j<MAX; j++) {
						// 前一列状态为j，当前列状态为k，判断是否符合条件
						if (check(j, k, n) && dp[i-1][j] != INF)
							dp[i][k] = min(dp[i][k], dp[i-1][j] + sum);
					}
				} else {
					dp[i][k] = sum;
				}
			}
		}
		for (int i=0; i<MAX; i++)
			ans = min(ans, dp[m][i]);
		cout << ans << '\n';
	}
}

int main() {
	t = 1;
	//cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

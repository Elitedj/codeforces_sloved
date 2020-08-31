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
const int maxn = 3e5+5;
 
 
int n, m, t;
int a[maxn];
 
void slove() {
	cin >> n;
	for (int i=1; i<=2*n; i++) cin >> a[i];
	vector<int> nums;
	int maxx = a[1];
	for (int i=1; i<=2*n; i++) {
		int j = i;
		while (j+1<=2*n && a[j+1]<=maxx) j++;
		nums.push_back(j-i+1);
		maxx = a[j+1];
		i = j;
	}
	nums.push_back(-100);
	sort(nums.begin(), nums.end());
	int sz = nums.size() - 1;
	vector<vector<int> > dp(sz+1);
	for (int i=0; i<=sz; i++)
		dp[i] = vector<int>(n+1, 0);
	for (int i=1; i<=sz; i++) {
		for (int j=0; j<=n; j++) {
			if (j < nums[i]) continue;
			dp[i][j] = max(dp[i-1][j], dp[i-1][j-nums[i]]+nums[i]);
		}
	}
	cout << (dp[sz][n] != n ? "NO" : "YES") << '\n';
}
 
int main() {
	//t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

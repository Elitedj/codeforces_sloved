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
 
int n, m, k;
int a[80][80];
int dp[80][80][80][80];
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	cin >> n >> m >> k;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin >> a[i][j];
	for (int i=0; i<75; i++)
		for (int j=0; j<75; j++)
			for (int k=0; k<75; k++)
				for (int l=0; l<75; l++)
					dp[i][j][k][l] = -inf;
	dp[0][0][0][0] = 0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			for (int cnt = 0; cnt < m / 2 + 1; cnt++) {
				for (int rem = 0; rem<k; rem++) {
					if (dp[i][j][cnt][rem] == -inf) continue;
					int ni = (j == m - 1 ? i + 1 : i);
					int nj = (j == m - 1 ? 0 : j + 1);
					if (i != ni) {
						dp[ni][nj][0][rem] = max(dp[ni][nj][0][rem], dp[i][j][cnt][rem]);
					} else {
						dp[ni][nj][cnt][rem] = max(dp[ni][nj][cnt][rem], dp[i][j][cnt][rem]);
					}
					if (cnt + 1 <= m / 2) {
						int nrem = (rem + a[i][j]) % k;
						if (i != ni) {
							dp[ni][nj][0][nrem] = max(dp[ni][nj][0][nrem], dp[i][j][cnt][rem] + a[i][j]);
						} else {
							dp[ni][nj][cnt + 1][nrem] = max(dp[ni][nj][cnt + 1][nrem], dp[i][j][cnt][rem] + a[i][j]);
						}
					}
				}
			}
		}
	}
	cout << max(0, dp[n][0][0][0]) << '\n';
	return 0;
}

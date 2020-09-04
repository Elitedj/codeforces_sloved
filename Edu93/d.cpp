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
const int maxn = 1e5+5;
 
int t;
 
int dp[205][205][205];
int r[205], g[205], b[205];
 
void slove() {
	int R, G, B;
	cin >> R >> G >> B;
	for (int i=0; i<R; i++) cin >> r[i];
	for (int i=0; i<G; i++) cin >> g[i];
	for (int i=0; i<B; i++) cin >> b[i];
	sort(r, r+R);
	sort(g, g+G);
	sort(b, b+B);
	for (int i=0; i<=R; i++) {
		for (int j=0; j<=G; j++) {
			for (int k=0; k<=B; k++) {
				if (i && j)
					dp[i][j][k] = max(dp[i][j][k], dp[i-1][j-1][k] + r[i-1] * g[j-1]);
				if (i && k)
					dp[i][j][k] = max(dp[i][j][k], dp[i-1][j][k-1] + r[i-1] * b[k-1]);
			    if (j && k)
					dp[i][j][k] = max(dp[i][j][k], dp[i][j-1][k-1] + g[j-1] * b[k-1]);
			}
		}
	}
	cout << dp[R][G][B] << '\n';
}
 
int main() {
	t = 1;
	//cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

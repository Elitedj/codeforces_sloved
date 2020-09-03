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
char mp[150][150];
void slove() {
	int n, m;
	cin >> n >> m;
	for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++)
			cin >> mp[i][j];
	int ans = 0;
	for (int i=1; i<m; i++)
		if (mp[n][i] == 'D') ans++;
	for (int i=1; i<n; i++)
		if (mp[i][m] == 'R') ans++;
	cout << ans << '\n';
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

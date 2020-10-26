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
const int maxn = 3e5 + 5;
 
int t;
 
int a[505][505], b[505][505], flag[505 * 505], pos[505 * 505];
void slove() {
	int n, m;
	cin >> n >> m;
	for (int i=1; i<=n*m; i++) flag[i] = pos[i] = 0;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			cin >> a[i][j];
		}
		flag[a[i][1]] = 1;
		pos[a[i][1]] = i;
	}
	for (int i=1; i<=m; i++)
		for (int j=1; j<=n; j++)
			cin >> b[i][j];
	for (int k=1; k<=m; k++) {
		if (flag[b[k][1]]) {
			for (int col=1; col<=n; col++) {
				int i = pos[b[k][col]];
				for (int j=1; j<=m; j++) cout << a[i][j] << ' ';
				cout << '\n';
			}
			break;
		}
	}
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	cin >> t;
	while (t--) slove();
	return 0;
}

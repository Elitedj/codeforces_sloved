#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e6 + 5;
 
int t;
 
int a[105][105];
void slove() {
	int n, m;
	cin >> n >> m;
	for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++)
			cin >> a[i][j];
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			if (((i + j) & 1) && a[i][j] % 2 == 0) a[i][j]++;
			if (!((i + j) & 1) && (a[i][j] & 1)) a[i][j]++;
			cout << a[i][j] << ' ';
		}
		cout << '\n';
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

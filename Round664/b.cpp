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
 
void slove() {
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	cout << x << ' ' << y << '\n';
	for (int i=1; i<=m; i++)
		if (y == i) continue;
		else cout << x << ' ' << i << '\n';
	int f = 1;
	for (int i=1; i<=n; i++) {
		if (i == x) continue;
		if (f) {
			for (int j=m; j>=1; j--)
				cout << i << ' ' << j << '\n';
			f ^= 1;
		} else {
			for (int j=1; j<=m; j++)
				cout << i << ' ' << j << '\n';
			f ^= 1;
		}
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

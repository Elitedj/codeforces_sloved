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
 
void slove() {
	ll a[2][3];
	for (int i=0; i<2; i++)
		for (int j=0; j<3; j++)
			cin >> a[i][j];
	ll ans = 0;
	ll tmp = min(a[0][2], a[1][1]);
	ans += 2 * tmp;
	a[0][2] -= tmp, a[1][1] -= tmp;
	tmp = min(a[0][2], a[1][2]);
	a[0][2] -= tmp, a[1][2] -= tmp;
	tmp = min(a[0][0], a[1][2]);
	a[0][0] -= tmp, a[1][2] -= tmp;
	ans -= 2ll * min(a[0][1], a[1][2]);
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

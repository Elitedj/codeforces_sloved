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
	int a, b, x, y, n;
	cin >> a >> b >> x >> y >> n;
	if (n >= a-x + b-y) cout << 1ll * x * y << '\n';
	else {
		ll ans = INF;
		int aa = a, bb = b, xx = x, yy = y, nn = n;
		int tmp = min(aa - xx, nn);
		aa -= tmp;
		nn -= tmp;
		tmp = min(bb - yy, nn);
		bb -= tmp;
		nn -= tmp;
		ans = min(ans, 1ll*aa*bb);
 
		aa = a; bb = b; xx = x; yy = y; nn = n;
		tmp = min(bb - yy, nn);
		bb -= tmp;
		nn -= tmp;
		tmp = min(aa - xx, nn);
		aa -= tmp;
		ans = min(ans, 1ll * aa * bb);
		cout << ans << '\n';
	}
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

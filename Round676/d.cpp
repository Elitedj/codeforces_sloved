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
 
int t;
 
void slove() {
	ll x, y;
	ll c1, c2, c3, c4, c5, c6;
	cin >> x >> y;
	cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6;
	ll ans = INF, tmp;
	if (x >= 0) {
		tmp = x * c6 + ((y >= 0) ? y * c2 : c5 * -y);
		ans = min(ans, tmp);
		tmp = x * c1 + ((y >= x) ? c2 * (y - x) : c5 * (x - y)); 
		ans = min(ans, tmp);
	} else {
		tmp = c3 * -x + ((y >= 0) ? c2 * y : c5 * -y);
		ans = min(ans, tmp);
		tmp = c4 * -x + ((y >= x) ? c2 * (y - x) : c5 * (x - y));
		ans = min(ans, tmp);
	}
	if (y >= 0) {
		tmp = c2 * y + ((x >= 0) ? c6 * x : c3 * -x);
		ans = min(ans, tmp);
		tmp = c1 * y + ((x >= y) ? c6 * (x - y) : c3 * (y - x));
		ans = min(ans, tmp);
	} else {
		tmp = c5 * -y + ((x >= 0) ? c6 * x : c3 * -x);
		ans = min(ans, tmp);
		tmp = c4 * -y + ((x >= y) ? c6 * (x - y) : c3 * (y - x));
		ans = min(ans, tmp);
	}
	cout << ans << '\n';
}
 
int main() {
	IO;
	t = 1;
	cin >> t;
	while (t--) slove();
	return 0;
}

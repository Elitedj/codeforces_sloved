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
 
int a[maxn];
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	ll fu = 0, zheng = 0;
	ll ans = 0;
	for (int i=1; i<=n; i++) {
		if (a[i] > 0) zheng += a[i];
		else fu += a[i];
		if (zheng == 0) {
			ans -= fu;
			fu = 0;
		} else {
			ll tmp = min(zheng, -1*fu);
			zheng -= tmp;
			fu += tmp;
			ans -= fu;
			fu = 0;
		}
	}
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

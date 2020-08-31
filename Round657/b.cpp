#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e6+5;
 
 
int main() {
	int t;
	cin >> t;
	while(t--) {
		ll l, r;
		ll m;
		cin >> l >> r >> m;
		for(int i=l; i<=r; i++) {
			ll yu = m % i;
			if(m/i && yu <= r-l) {
				cout << i << ' ' << l+yu << ' ' << l << '\n';
				break;
			}
			ll sum = (m / i + 1) * i;
			if(sum-m <= r-l) {
				cout << i << ' ' << l << ' ' << l+sum-m << '\n';
				break;
			}
		}
	}
	return 0;
}

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
 
int check(ll x, int s) {
	int sum = 0;
	while (x) {
		sum += x % 10;
		x /= 10;
	}
	return sum <= s;
}
 
void slove() {
	ll n;
	int s;
	cin >> n >> s;
	ll ans = n;
	ll idx = 1;
	while (!check(ans, s)) {
		idx *= 10;
		ans = ans / idx * idx;
		ans += idx;
	}
	while (idx) {
		idx /= 10;
		for (int i=1; i<=10; i++) {
			if (ans - 1ll*i*idx>=n && check(ans - 1ll*i*idx, s)) {
				ans -= 1ll * i * idx;
				break;
			}
		}
	}
	cout << ans - n << '\n';
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

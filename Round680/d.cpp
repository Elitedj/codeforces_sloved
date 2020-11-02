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
const int maxn = 3e5 + 5;
 
int t;
 
ll a[maxn], f[maxn];
 
ll kpow(ll a, ll b) {
	ll res = 1;
	while (b) {
		if (b & 1) res = res * a % mod;
		a = a * a % mod;
		b >>= 1;
	}
	return res;
}
 
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=(n<<1); i++) cin >> a[i];
	sort(a + 1, a + 2 * n + 1);
	ll ans = 0;
	for (int i=1; i<=n; i++) {
		ans = (ans + a[i + n] - a[i]) % mod;
	}
	f[0] = 1;
	for (int i=1; i<=(n<<1); i++) {
		f[i] = f[i - 1] * i % mod;
	}
	ans = ans * f[(n<<1)] % mod * kpow(f[n], mod - 2) % mod * kpow(f[n], mod - 2) % mod;
	cout << ans << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	// cin >> t;
	while (t--) slove();
	return 0;
}

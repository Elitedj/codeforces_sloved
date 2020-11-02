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
const int maxn = 1e5 + 5;
 
int t;
 
ll kpow(ll a, ll b) {
	ll res = 1;
	while (b) {
		if (b & 1) res *= a;
		a *= a;
		b >>= 1;
	}
	return res;
}
 
void slove() {
	ll p, q;
	cin >> p >> q;
	if (p % q) {
		cout << p << '\n';
		return ;
	}
	vector<P> fac;
	for (int i=2; i*i<=q; i++) {
		if (q % i != 0) continue;
		int cnt = 0;
		while (q % i == 0) q /= i, cnt++;
		fac.push_back(P(i, cnt));
	}
	if (q > 1) fac.push_back(P(q, 1));
 
	ll ans = 1;
	for (auto v:fac) {
		int x = v.first, cnt = v.second;
		int cntp = 0;
		ll tmp = p;
		while (tmp % x == 0) tmp /= x, cntp++;
		tmp = p / kpow(x, max(0, cntp - (cnt - 1)));
		ans = max(ans, tmp);
	}
	cout << ans << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	cin >> t;
	while (t--) slove();
	return 0;
}

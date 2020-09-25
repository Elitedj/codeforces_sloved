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
const int maxn = 3e5+5;
 
 
ll add(ll x, ll y) {
	return (x + y) % mod;
}
 
ll mul(ll x, ll y) {
	return (x * y) % mod;
}
 
ll calc(ll x, ll y) {
	ll res = 1;
	while (y) {
		if (y & 1) res = mul(res, x);
		x = mul(x, x);
		y >>= 1;
	}
	return res;
}
 
vector<int> a, inva;
void pre(int n) {
	a = vector<int>(n + 1, 1);
	inva = vector<int>(n + 1, 1);
	for (int i = 2; i <= n; i++)
		a[i] = mul(a[i - 1], i);
	inva[n] = calc(1ll * a[n], mod - 2);
	for (int i = n - 1; i >= 2; i--)
		inva[i] = mul(inva[i + 1], i + 1);
}
 
ll C(ll x, ll y) {
	if (x < y || y < 0) return 0;
	return mul(mul(a[x], inva[y]), inva[x - y]);
}
 
vector<P> d;
 
int main() {
	IO;
	int n, k;
	ll ans = 0;
	cin >> n >> k;
	pre(n);
	for (int i = 1; i <= n; i++) {
		int l, r;
		cin >> l >> r;
		d.push_back(P(l, 1));
		d.push_back(P(r + 1, -1));
	}
	sort(d.begin(), d.end());
	int cnt = 0;
	for (auto v : d) {
		if (v.second == 1)
			ans = add(ans, C(cnt, k - 1));
		cnt += v.second;
	}
	cout << ans << '\n';
	return 0;
}

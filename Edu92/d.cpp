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
const int maxn = 3e5+5;
 
 
int t;
 
ll cal(ll len, ll k, ll n) {
	ll res = 0;
	if (len * n >= k) res += k;
	else {
		k -= len * n;
		res += len * n + 2 * k;
	}
	return res;
}
 
void slove() {
	ll n, k;
	ll l1, l2, r1, r2;
	cin >> n >> k;
	cin >> l1 >> r1 >> l2 >> r2;
	if (l2 < l1) {
		swap(l1, l2);
		swap(r1, r2);
	}
	if (r1 >= l2) {
		ll in = min(r1, r2) - l2;
		ll li = max(r1, r2) - l1 - in;
		if (k > n * in) cout << cal(li, k - n * in, n) << '\n';
		else cout << "0\n";
	} else {
		ll d = l2 - r1, ans = INF;
		for (int i=1; i<=n; i++)
			ans = min(ans, cal(r2 - l1, k, i) + i * d);
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
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<ll, ll> P;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5+5;
 
 
int t;
 
ll fun(ll idx) {
	return 1ll * idx * (1 + idx) / 2;
}
 
void slove() {
	ll x;
	cin >> x;
	int ans = 0;
	ll sum = 0;
	ll add = 1;
	for (ll i=1; ; i+=add) {
		sum = fun(i);
		//DEBUG(sum);
		add <<= 1;
		if (x < sum) break;
	   	ans++;
		x -= sum;
	}
	cout << ans << '\n';
}
 
int main() {
	IO;
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

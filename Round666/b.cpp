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
 
 
int n, t;
ll a[maxn];
bool check(int idx, int n) {
	ll ans = 1;
	n--;
	ll up = 1ll*1000*inf;
	while (n!=0 && ans*idx >0 && ans*idx <= up) {
		n--;
		ans *= idx;
	}
	return n==0 ? 1 : 0;
}
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	sort(a+1, a+n+1);
	ll ans = INF;
	int i = 1;
	while (i) {
		if (!check(i, n)) break;
		ll tmp = 1;
		ll sum = 0;
		for (int j=1; j<=n; j++) {
			sum += abs(tmp - a[j]);
			tmp *= i;
		}
		ans = min(ans ,sum);
		i++;
	}
	cout << ans << '\n';
}
 
int main() {
	t = 1;
	//cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

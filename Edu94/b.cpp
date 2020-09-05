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
const int maxn = 1e5+5;
 
int t;
 
void slove() {
	ll p, f, cs, cw, s, w;
	cin >> p >> f >> cs >> cw >> s >> w;
	if (s > w) {
		swap(s, w);
		swap(cs, cw);
	}
	ll ans = 0;
	for (int i=0; i<=cs; i++) {
		ll t1 = min(p / s, 1ll * i), t2 = min(f / s, cs - i);
		ll tmp = (p - s * t1) / w + (f - s * t2) / w;
		ans = max(ans, t1 + t2 + min(tmp, cw));
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

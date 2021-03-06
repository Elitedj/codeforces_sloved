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
int a[maxn], b[maxn];
 
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	for (int i=1; i<=n; i++) cin >> b[i];
	int mina = inf, minb = inf;
	for (int i=1; i<=n; i++) mina = min(mina, a[i]);
	for (int i=1; i<=n; i++) minb = min(minb, b[i]);
	ll ans = 0;
	for (int i=1; i<=n; i++) {
		int tmp = min (a[i] - mina, b[i] - minb);
		a[i] -= tmp;
		b[i] -= tmp;
		ans += tmp;
		ans += a[i] - mina;
		ans += b[i] - minb;
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

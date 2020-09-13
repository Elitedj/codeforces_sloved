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
 
int a[maxn];
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	ll ans = -1 * INF;
	for (int i=0; i<=5; i++) {
		ll sum = 1;
		for (int j=1; j<=i; j++) sum *= a[j];
		for (int j=n; j>n-(5-i); j--) sum *= a[j];
		ans = max(ans, sum);
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

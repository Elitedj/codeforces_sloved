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
const int maxn = 2e5 + 5;
 
int t;
ll a[maxn];
void slove() {
	int k, n;
	cin >> n >> k;
	for (int i=1; i<=n; i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	ll ans = a[n];
	for (int i=n-1; i>=1 && k; i--, k--) {
		ans += a[i];
	}
	cout << ans << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	// freopen("myout.txt", "w", stdout);
	IO;
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

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
const int maxn = 1e6+5;
 
 
int t;
 
int a[1005];
void slove() {
	int n, k;
	cin >> n >> k;
	for (int i=1; i<=n; i++) cin >> a[i];
	sort(a+1, a+n+1);
	int ans = 0;
	for (int i=n; i>1; i--) {
		ans += (k - a[i]) / a[1];
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

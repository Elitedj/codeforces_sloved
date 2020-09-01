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
 
 
int n, m, t;
int k, z;
int a[maxn];
 
void slove() {
	cin >> n >> k >> z;
	for (int i=0; i<n; i++) cin >> a[i];
	a[n] = -1*inf;
	int ans = 0;
	for (int left=0; left<=z; left++) {
		int pos = k - 2 * left;
		if (pos < 0) break;
		int sum = 0, be = 0;
		for (int i=0; i<=pos; i++) sum += a[i];
		for (int i=0; i<=pos; i++) be = max(be, a[i] + a[i+1]);
		ans = max(ans, sum + be * left);
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
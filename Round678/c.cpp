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
 
void slove() {
	int n, x, pos;
	cin >> n >> x >> pos;
	ll ans = 1;
	ll sm = x - 1, lg = n - x;
	int l = 0, r = n;
	while (l < r) {
		int mid = (l + r) >> 1;
		if (mid <= pos) {
			l = mid + 1;
			if (mid == pos) continue;
			ans = ans * sm % mod;
			sm--;
		} else {
			r = mid;
			ans = ans * lg % mod;
			lg--;
		}
	}
	if (l == 0 || l - 1 != pos || sm < 0 || lg < 0) cout << "0\n";
	else {
		for (int i=2; i<=sm + lg; i++) {
			ans = ans * i % mod;
		}
		cout << ans << '\n';
	}
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	// cin >> t;
	while (t--) slove();
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e6 + 5;
 
 
int t;
 
void slove() {
	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	ll n = s.size();
	ll pw = 1, sum = 0, ans = 0;
	for (int i=0; i<n; i++) {
		ans = (ans + (n - i - 1) * (n - i) / 2 % mod * pw % mod * (s[i] - '0')) % mod;
		ans = (ans + (s[i] - '0') * sum % mod) % mod;
		sum = (sum + pw * (i + 1) % mod) % mod;
		pw = 10 * pw % mod;
	}
	cout << ans << '\n';
}
 
 
int main() {
	// freopen("in.txt", "r", stdin);
	// freopen("myout.txt", "w", stdout);
	t = 1;
	// cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

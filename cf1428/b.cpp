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
const int maxn = 1e5 + 5;
 
int t;
 
void slove() {
	int n;
	string s;
	cin >> n >> s;
	vector<int> ok(n, 0);
	int l = 0, r = 0;
	for (int i=0 ;i<n; i++) {
		if (s[i] == '-') {
			ok[i] = ok[(i + 1) % n] = 1;
		} else if (s[i] == '>') l++;
		else r++;
	}
	int ans = 0;
	for (int i=0; i<n; i++) 
		if (ok[i]) ans++;
	if (l == 0 || r == 0) ans = n;
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

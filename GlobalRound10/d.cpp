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
 
void slove() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int len = 1, fl = 0, ans = 0, first = 0;
	for (int i=1; i<n; i++) {
		if (s[i] == s[i-1]) len++;
		else {
			if (!first) {
				fl = len;
				first = 1;
			} else {
				ans += len / 3;
			}
			len = 1;
		}
	}
	if (!first) {
		cout << (n <= 2 ? 0 : (n+2) / 3) << '\n';
	} else {
		if (s[0] == s[n-1]) {
			cout << ans + (fl + len) / 3 << '\n';
		} else {
			cout << ans + fl / 3 + len / 3 << '\n';
		}
	}
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

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
const int maxn = 3e5 + 5;
 
int t;
 
void slove() {
	string s;
	cin >> s;
	int n = s.length();
	int ans = 0;
	int sum = 0;
	for (int i=n-1; i>=0; i--) {
		if (s[i] == 'A') {
			if (sum > 0) {
				sum--;
				ans += 2;
			}
		} else sum++;
	}
	// DEBUG(ans);
	if (sum) ans += sum / 2 * 2;
	cout << n - ans << '\n';
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

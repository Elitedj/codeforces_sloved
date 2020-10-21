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
const int maxn = 500 + 5;
 
int t;
 
void slove() {
	int n;
	cin >> n;
	int ans = 0;
	for (int i=1; i<=9; i++) {
		int tmp = 0;
		int cnt = 0;
		while (tmp < 10000 && tmp != n) {
			tmp *= 10;
			tmp += i;
			if (tmp > 10000) break;
			cnt++;
			ans += cnt;
			// DEBUG(ans);	
		}
		if (tmp == n) break;
	}
	cout << ans << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	cin >> t;
	while (t--) slove();
	return 0;
}

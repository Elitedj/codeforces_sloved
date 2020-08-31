#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e6+5;
 
 
int a[1005], b[1005];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		map<int, int> vis;
		for(int i=1; i<=n; i++) {
			cin >> a[i];
			vis[a[i]] = 1;
		}
		int ans = -1;
		for(int i=1; i<=m; i++) {
			cin >> b[i];
			if(vis[b[i]] == 1)
				ans = b[i];
		}
		if(ans == -1) cout << "NO\n";
		else {
			cout << "YES\n";
			cout << "1 " << ans << '\n';
		}
	}
	return 0;
}

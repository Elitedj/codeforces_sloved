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
 
 
ll a[maxn];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		for (int i=1; i<= n; i++) cin >> a[i];
		sort(a+1, a+n+1);
		reverse(a+1, a+n+1);
		int ans = 0;
		for (int i=1; i<=n; i++) {
			int j = i;
			while (j+1 <= n && (j-i+1)*a[j] < x) j++;
			if((j-i+1)*a[j] >= x) ans++;
			i = j;
		}
		cout << ans << '\n';
	}
	return 0;
}

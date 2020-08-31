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
 
 
int a[maxn], dp[maxn];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for(int i=1; i<=n; i++) cin >> a[i];
		dp[n+1] = 0;
		for(int i=n; i>=1; i--) {
			if(a[i]==1 && dp[i+1]) dp[i] = 0;
			else dp[i] = 1;
		}
		if(dp[1]) cout << "First\n";
		else cout << "Second\n";
	}
	return 0;
}

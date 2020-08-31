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
 
 
int a[maxn];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for(int i=1; i<=n; i++) cin >> a[i];
		int i = n;
		while(i-1>=1 && a[i-1]>=a[i]) i--;
		while(i-1>=1 && a[i-1]<=a[i]) i--;
		cout << i - 1 << '\n';
	}
	return 0;
}

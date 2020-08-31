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
 
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		int a[3];
		for(int i=0; i<3; i++) cin>>a[i];
		sort(a, a+3);
		if (a[1] != a[2]) cout << "NO\n";
		else {
			cout << "YES\n";
			cout << a[2] << ' ' << a[0] << ' ' << a[0] << '\n';
		}
	}
	return 0;
}

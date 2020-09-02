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
const int maxn = 3e5+5;
 
 
int t;
 
void slove() {
	int n;
	cin >> n;
	n -= 6 + 10 + 14;
	if (n>0) {
		int a = 6, b = 10, c = 14;
		cout << "YES\n";
		if (n == 6 || n == 10 || n == 14) {
			n--;
			c++;
		}
		cout << a << ' ' << b << ' ' << c << ' ' << n << '\n';
	} else {
		cout << "NO\n";
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

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
const int maxn = 1e5+5;
 
 
int t;
 
void slove() {
	int x, y, k;
	cin >> x >> y >> k;
	ll sticks = 1ll * k * y + k;
	ll ans = 0;
	ans = ((sticks - 1) / (x - 1)) + ((sticks - 1) % (x - 1) != 0);
	cout << ans + k << '\n';	
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

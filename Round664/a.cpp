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
const int maxn = 1e6+5;
 
int t;
 
void slove() {
	int r, g, b, w;
	cin >> r >> g >> b >> w;
	int ok = 0;
	ok |= ((r&1) + (g&1) + (b&1) + (w&1) < 2);
	if (r && g && b)
		r--, b--, g--, w++;
	ok |= ((r&1) + (g&1) + (b&1) + (w&1) < 2);
	cout << (ok ? "Yes\n" : "No\n");
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

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
const int maxn = 2e6+5;
 
 
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, y, n;
		cin >> x >> y >> n;
		int ans = (n / x) * x + y;
		if (ans > n) ans -= x;
		cout << ans << '\n';
	}
	return 0;
}

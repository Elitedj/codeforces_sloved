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
const int maxn = 2e6+5;
 
 
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int ans = n - 1;
		for (int i = 1; i * i <= n; i++)
		{
			if (n % i == 0)
			{
				ans = min(ans, n - i);
				if (i > 1) ans = min(ans, n - n / i);
			}
		}
		cout << n - ans << " " << ans << '\n';
	}
	return 0;
}

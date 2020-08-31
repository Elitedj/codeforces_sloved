#include<bits/stdc++.h>
//#include<windows.h>
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
		ll n, k;
		cin >> n >> k;
		map<ll, int> cnt;
		for (int i = 1; i <= n; i++)
		{
			ll x;
			cin >> x;
			ll pos = k - (x % k);
			if (pos != k)
				cnt[1ll * pos]++;
		}
		while (1)
		{
			int ok = 1;
			for (auto v : cnt)
			{
				if (v.second > 1)
				{
					ok = 0;
					ll base = k;
					while (v.second > 1)
					{
						while (cnt[v.first + base] != 0)
							base += k;
						cnt[v.first + base] = 1;
						v.second--;
					}
					cnt[v.first] = 1;
				}
			}
			if (ok) break;
		}
		ll ans = 0;
		for (auto v : cnt) ans = max(ans, v.first);
		cout << ans + (ans == 0 ? 0 : 1) << '\n';
	}
	return 0;
}

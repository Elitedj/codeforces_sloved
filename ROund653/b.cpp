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
		int n;
		cin >> n;
		int cnt[4] = {0};
		for (int i = 2; i < 4; i++)
		{
			while (n % i == 0 && n > 1)
			{
				cnt[i]++;
				n /= i;
			}
		}
		if (n != 1 || cnt[2] > cnt[3]) cout << "-1\n";
		else
		{
			int ans = 0;
			ans += cnt[2];
			cnt[3] -= cnt[2];
			ans += 2 * cnt[3];
			cout << ans << '\n';
		}
	}
	return 0;
}

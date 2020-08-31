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
	int n, k;
	cin >> n >> k;
	vector<int> a, b, ab;
	int ans = 0;
	for (int i = 1; i <= n ; i++)
	{
		int t, x, y;
		cin >> t >> x >> y;
		if (x == 1 && y == 1) ab.push_back(t);
		else if(x == 1) a.push_back(t);
		else if(y == 1) b.push_back(t);
	}
	if (a.size() + ab.size() < k || b.size() + ab.size() < k) cout << "-1\n";
	else
	{
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		sort(ab.begin(), ab.end());
		int idxab = 0, idxa = 0;
		int asz = a.size(), bsz = b.size(), absz = ab.size();
		while (k--)
		{
			if (idxa < asz && idxa < bsz && idxab < absz && a[idxa] + b[idxa] <= ab[idxab])
			{
				ans += a[idxa] + b[idxa];
				idxa++;
			}
			else
			{
				if (idxab < absz)
				{
					ans += ab[idxab];
					idxab++;
				}
				else
				{
					ans += a[idxa] + b[idxa];
					idxa++;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}

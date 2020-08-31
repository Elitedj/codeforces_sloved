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
 
ll a[maxn];
void init()
{
	for(int i = 3; i < maxn; ++i)
	{
		a[i] = (a[i - 1] + 2 * a[i - 2]) % mod;
		if (i % 3 == 0)
			a[i] = (a[i] + 1) % mod;
	}
}
int main()
{
	init();
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << (4ll * a[n]) % mod << '\n';
	}
	return 0;
}

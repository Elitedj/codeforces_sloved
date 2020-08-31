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
 
 
int mp[301][301];
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<P> pos;
		for(int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				mp[i][j] = 0;
				pos.push_back(P(j, (j+i)%n));
			}
		}
		for(int i = 0; i < k; i++)
			mp[pos[i].first][pos[i].second] = 1;
		cout << (k % n ? 2 : 0) << '\n';
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
				cout << mp[i][j];
			cout << '\n';
		}
	}
	return 0;
}

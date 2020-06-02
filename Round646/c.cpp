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
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, x;
		cin>>n>>x;
		vector<int> cnt(n+1, 0);
		for(int i=1;i<n;i++)
		{
			int u, v;
			cin>>u>>v;
			cnt[u]++;
			cnt[v]++;
		}
		if(cnt[x]<=1 || n%2==0) cout<<"Ayush\n";
		else cout<<"Ashish\n";
	}
	return 0;
}

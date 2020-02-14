#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
using namespace std;
 
 
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		string a, b, c;
		cin>>a>>b>>c;
		int f = 1;
		for(int i=0;i<a.length();i++)
		{
			if(c[i]!=a[i] && c[i]!=b[i])
			{
				f=0;break;
			}
		}
		if(f)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

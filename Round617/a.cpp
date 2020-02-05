#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 4e5+5;
const ll mod = 1e9+7;
using namespace std;
 
int a[maxn];
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ou = 0, ji=0;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			if(x%2==1)ji++;
			else ou++;
		}
		if(ou==0 && ji!=0)
		{
			if(ji%2==1)cout<<"YES\n";
			else cout<<"NO\n";
		}
		else if(ji==0 && ou!=0)
		{
			cout<<"NO\n";
		}
		else
			cout<<"YES\n";
	}
	return 0;
}

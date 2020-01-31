#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%2==1)
		{
			cout<<"7";
			n-=3;
		}
		for(int i=1;i<=n/2;i++)cout<<"1";
		cout<<"\n";
	}
	return 0;
}

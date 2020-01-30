#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll s=0, x=0;
		for(int i=1;i<=n;i++)
		{
			ll a;
			cin>>a;
			s+=a;
			x^=a;
		}
		cout<<"2\n";
		cout<<x<<" "<<s+x<<"\n";
	}
	return 0;
}

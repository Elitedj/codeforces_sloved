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
const int maxn = 2e5+5;
 
 
int a[50];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		int odd=0, even=0;
		for(int i=0;i<n;i++)
			if((i%2==1) && ((i%2) != (a[i]%2))) odd++;
			else if((i%2==0) && ((i%2) != (a[i]%2))) even++;
		if(odd == even) cout<<odd<<"\n";
		else cout<<"-1\n";
	}
	return 0;
}

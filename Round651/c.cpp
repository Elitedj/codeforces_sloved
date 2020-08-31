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
 
 
int check(int n)
{
	for(int i=2;i*i<=n;i++)
		if(n%i == 0) return 0;
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n == 1) cout<<"FastestFinger\n";
		else if(n == 2 || (n&1)) cout<<"Ashishgup\n";
		else if((n/2) % 2 == 1)
		{
			if(check(n/2)) cout<<"FastestFinger\n";
			else cout<<"Ashishgup\n";
		}
		else
		{
			if((n&(n-1)) == 0) cout<<"FastestFinger\n";
			else cout<<"Ashishgup\n";
		}
	}
	return 0;
}

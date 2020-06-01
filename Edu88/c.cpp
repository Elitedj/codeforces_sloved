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
const int maxn = 1e6+5;
 
 
double h, c, tar;
double cal(int x)
{
	return (x*(h+c)+h)*1.0 / (2*x+1);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>h>>c>>tar;
		if(h+c >= 2*tar) cout<<"2\n";
		else
		{
			int x = (h-tar) / (2*tar-h-c);
			if(tar-cal(x) >= cal(x+1)-tar) cout<<2*x+1<<"\n";
			else cout<<2*x+3<<"\n";
		}
	}
	return 0;
}

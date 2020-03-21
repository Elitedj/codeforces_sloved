#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
using namespace std;
 
 
 
int main()
{
	ll u, v;
	cin>>u>>v;
	if(u>v || (v-u)%2!=0)
	{
		cout<<"-1\n"; return 0;
	}
	if(u==0 && v==0)
	{
		cout<<"0\n"; return 0;
	}
	if(u==v)
	{
		cout<<"1\n"<<u<<"\n"; return 0;
	}
	ll p = (v-u)/2;
	ll q = (u^p);
	if(p+q == v)
	{
		cout<<"2\n"<<p<<" "<<q<<"\n"; return 0;
	}
	cout<<"3\n"<<u<<" "<<(v-u)/2<<" "<<(v-u)/2<<"\n";
	return 0;
}

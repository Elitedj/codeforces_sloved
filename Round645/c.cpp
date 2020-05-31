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
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll x1, x2, y1, y2;
		cin>>x1>>y1>>x2>>y2;
		cout<<(x2-x1) * (y2-y1) + 1<<"\n";
	}
	return 0;
}

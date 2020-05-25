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
		int a, b;
		cin>>a>>b;
		int len = min(max(a+a, b), min(a+b, max(a, b+b)));
		cout<<len*len<<"\n";
	}
	return 0;
}

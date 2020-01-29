#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
typedef pair<int, int> P;
const int maxn = 2e3+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a, b, c, r;
		cin>>a>>b>>c>>r;
		if(a>b)swap(a, b);
		int tmp = max(0, min(c+r, b)-max(c-r, a));
		cout<<b-a-tmp<<"\n";
	}
	return 0;
}

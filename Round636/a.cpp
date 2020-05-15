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
 
 
vector<int> v;
void init()
{
	int a = 2;
	while(a<=mod)
	{
		a<<=1;
		v.push_back(a-1);
	}
}
int main()
{
	IO;
	int t;
	cin>>t;
	init();
	while(t--)
	{
		int n;
		cin>>n;
		for(auto val:v)
			if(n%val==0)
			{
				n/=val;
				break;
			}
		cout<<n<<"\n";
	}
	return 0;
}

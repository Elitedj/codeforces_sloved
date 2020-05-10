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
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> ans;
		int t = 1;
		while(n)
		{
			if(n%10)
			{
				ans.push_back((n%10)*t);
			}
			t *= 10;
			n /= 10;
		}
		cout<<ans.size()<<"\n";
		for(auto v:ans) cout<<v<<" ";
		cout<<"\n";
	}
	return 0;
}

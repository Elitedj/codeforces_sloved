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
const int maxn = 1e5+5;
 
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> ans;
		for(int i=1;i<=n;i<<=1)
		{
			ans.push_back(i);
			n -= i;
		}
		if(n) ans.push_back(n);
		sort(ans.begin(), ans.end());
		int day = ans.size()-1;
		cout<<day<<"\n";
		for(int i=0;i<day;i++)
			cout<<ans[i+1]-ans[i]<<" ";
		cout<<"\n";
	}
	return 0;
}

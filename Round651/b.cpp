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
 
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<P> odd, even;
		for(int i=1;i<=2*n;i++)
		{
			int x;
			cin>>x;
			if(x&1) odd.push_back(P(x, i));
			else even.push_back(P(x, i));
		}
		int os = odd.size();
		int es = even.size();
		if(os>0 && os%2==0)
		{
			odd.erase(odd.begin());
			odd.erase(odd.begin());
			os -= 2;
		}
		else if(es>0 && es%2==0)
		{
			even.erase(even.begin());
			even.erase(even.begin());
			es -= 2;
		}
		else
		{
			odd.erase(odd.begin());
			even.erase(even.begin());
			os--; es--;
		}
		for(int i=0;i<os;i+=2)
			cout<<odd[i].second<<" "<<odd[i+1].second<<"\n";
		for(int i=0;i<es;i+=2)
			cout<<even[i].second<<" "<<even[i+1].second<<"\n";
	}
	return 0;
}

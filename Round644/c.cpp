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
		int n;
		cin>>n;
		vector<int> even, odd;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			if(x&1) odd.push_back(x);
			else even.push_back(x);
		}
		if((int)(odd.size())%2==0) cout<<"YES\n";
		else
		{
			int f = 0;
			for(int i:even)
				for(int j:odd)
					if(abs(i-j) == 1)
					{
						f = 1;
						break;
					}
			if(f) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	return 0;
}

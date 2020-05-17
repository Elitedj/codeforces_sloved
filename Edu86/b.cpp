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
		string s;
		cin>>s;
		int one=0, zero=0;
		int n = s.length();
		for(int i=0;i<n;++i)
			if(s[i]=='0') zero++;
			else one++;
		if(zero==0 || one==0)
			cout<<s<<"\n";
		else
		{
			string ans = "";
			for(int i=0;i<n;++i)
				ans += "10";
			cout<<ans<<"\n";
		}
	}
	return 0;
}

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
		string s;
		cin>>n>>s;
		int f = 0;
		string a="", b="";
		for(int i=0;i<n;i++)
		{
			if(f)
			{
				if(s[i]=='0')a+='0', b+='0';
				else a+='0', b+=s[i];
			}
			else
			{
				if(s[i]=='0')a+='0', b+='0';
				else if(s[i]=='1') a+='1', b+='0', f=1;
				else a+='1', b+='1';
			}
		}
		cout<<a<<"\n"<<b<<"\n";
	}
	return 0;
}

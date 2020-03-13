#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
using namespace std;
 
 
 
int main()
{
	int n;
	string s;
	cin>>n>>s;
	int cnt = 0;
	for(int i=0;i<n;i++)
		if(s[i]=='(')cnt++;
		else cnt--;
	if(cnt!=0)
	{
		cout<<"-1\n"; return 0;
	}
	int ans = 0;
	int last = 0;
	int flag = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='(')cnt++;
		else cnt--;
		if(cnt<0) flag = 1;
		if(cnt==0)
		{
			if(flag) ans += i-last+1;
			flag = 0;
			last = i+1;
		}
	}
	cout<<ans<<"\n";
	return 0;
}

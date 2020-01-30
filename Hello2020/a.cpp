#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int n, m, q;
string a[30], b[30];
int main()
{
	IO;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=m;i++)
		cin>>b[i];
	cin>>q;
	while(q--)
	{
		string ans="";
		int y;
		cin>>y;
		int pos = y%n;
		if(pos==0)pos=n;
		ans += a[pos];
		pos = y%m;
		if(pos==0)pos=m;
		ans += b[pos];
		cout<<ans<<"\n";
	}
	return 0;
}

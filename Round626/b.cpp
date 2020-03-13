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
 
 
vector<int> row, col;
ll cal(int r, int c)
{
	ll cnt1=0, cnt2=0;
	for(int i=r-1; i<row.size(); i++)
		if(row[i-r+1]==row[i]-r+1)cnt1++;
	for(int i=c-1; i<col.size(); i++)
		if(col[i-c+1]==col[i]-c+1)cnt2++;
	return cnt1*cnt2;
}
int main()
{
	IO;
	int n, m, k;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		if(x) row.push_back(i-1);
	}
	for(int i=1;i<=m;i++)
	{
		int x;
		cin>>x;
		if(x) col.push_back(i-1);
	}
	ll ans = 0;
	for(int i=1; i*i<=k; i++)
		if(k%i==0)
		{
			ans += cal(i, k/i);
			if(i != k/i)
				ans += cal(k/i, i);
		}
	cout<<ans<<"\n";
	return 0;
}

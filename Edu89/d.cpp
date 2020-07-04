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
const int maxn = 5e5+5;
 
 
const int N = 1e7+5;
int ispr[N];
 
void init()
{
	for(int i=2;i<N;i++)
	{
		if(ispr[i] == 0)
		{
			ispr[i] = i;
			for(int j=i+i;j<N;j+=i)
				ispr[j] = i;
		}
	}
}
 
int ans[maxn][2];
int main()
{
	init();
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;	
		if(x%2==0)
		{
			while(x%2==0) x/=2;
			if(x==1)
			{
				ans[i][0] = ans[i][1] = -1;
				continue;
			}
			ans[i][0] = 2;
			ans[i][1] = x;
		}
		else
		{
			vector<int> pr;
			while(x>1)
			{
				int tmp = ispr[x];
				while(x%tmp==0)
					x/=tmp;
				pr.push_back(tmp);
			}
			sort(pr.begin(), pr.end());
			if(pr.size()==1) ans[i][0] = ans[i][1] = -1;
			else
			{
				ans[i][0] = pr[0];
				ans[i][1] = pr[1];
			}
		}
	}
	for(int i=1;i<=n;i++) cout<<ans[i][0]<<" ";
	cout<<"\n";
	for(int i=1;i<=n;i++) cout<<ans[i][1]<<" ";
	cout<<"\n";
	return 0;
}

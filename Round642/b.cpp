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
 
 
int a[50], b[50];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>b[i];
		while(k--)
		{
			int maxv=0, id1=-1;
			int minv=inf, id2=-1;
			for(int i=1;i<=n;i++)
				if(minv > a[i])
				{
					minv = a[i];
					id1 = i;
				}
			for(int i=1;i<=n;i++)
				if(maxv < b[i])
				{
					maxv = b[i];
					id2 = i;
				}
			if(a[id1] < b[id2]) swap(a[id1], b[id2]);
		}
		int sum = 0;
		for(int i=1;i<=n;i++) sum += a[i];
		cout<<sum<<"\n";
	}
	return 0;
}

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
const int maxn = 3e5+5;
 
int e[maxn];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;++i) cin>>e[i];
		sort(e+1, e+n+1);
		int ans = 0;
		for(int i=1;i<=n;)
		{
			int j = i;
			while(j<n && (j-i+1)<e[j]) j++;
			if(j-i+1 == e[j])
				ans++;
			i = j+1;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

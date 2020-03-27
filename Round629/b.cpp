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
	int t;
	cin>>t;
	while(t--)
	{
		ll n, k;
		cin>>n>>k;
		ll sum = 0;
		int idx;
		for(idx=1; sum+idx<=k; sum+=idx, idx++);
		if(sum==k)idx--;
		string ans = "";
		for(int i=1;i<=n;i++)ans+='a';
		ans[n-idx-1] = 'b';
		int t = k-sum == 0 ? idx : k-sum;
		ans[n-t] = 'b';
		cout<<ans<<"\n";
	}
	return 0;
}

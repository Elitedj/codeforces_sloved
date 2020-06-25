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
 
 
int a[1000], b[1000];
map<P, int> cnt;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cnt.clear();
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>b[i];
		int flag = true;
		for(int i=1;i<=n/2;i++)
		{
			P p = {min(a[i], a[n-i+1]), max(a[i], a[n-i+1])};
			cnt[p]++;
		}
		for(int i=1;i<=n/2;i++)
		{	
		 	P p = {min(b[i], b[n-i+1]), max(b[i], b[n-i+1])};
		 	if(cnt[p]) cnt[p]--;
			else flag = false;
		}
		if((n&1) && (a[n/2+1] != b[n/2+1])) flag = false;
		if(flag) cout<<"yes\n";
		else cout<<"No\n";
	}
	return 0;
}

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
		int n, k;
		cin>>n>>k;
		string s;
		cin>>s;
		s = '0'+s;
		int ans = 0;
		for(int i=1;i<=(k+1)/2;i++)
		{
			vector<int> cnt1(26, 0), cnt2(26, 0);
			for(int j=i;j<=n;j+=k)
				cnt1[s[j]-'a']++;
			for(int j=k-i+1;j<=n;j+=k)
				cnt2[s[j]-'a']++;
			//cout<<"--->"<<i<<" "<<k-i+1<<"\n";
			int sum = inf;
			int tmp = n/k;
			for(int j=0;j<26;j++)
				sum = min(sum, 2*tmp-cnt1[j]-cnt2[j]);
			if(i == k-i+1) sum/=2;
			ans += sum;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

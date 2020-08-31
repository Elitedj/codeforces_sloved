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
 
 
int gcd(int a, int b)
{
	return b==0 ? a : gcd(b, a%b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		string s;
		cin>>s;
		vector<int> cnt(26, 0);
		for(int i=0;i<n;i++) cnt[s[i] - 'a']++;
		int ans = 0;
		for(int i=n;i>=1;i--)
		{
			int c = gcd(i, k);
			int prec = i/c;
			for(int j=0;j<26;j++) c -= cnt[j]/prec;
			if(c <= 0)
			{
				ans = i;
				break;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}

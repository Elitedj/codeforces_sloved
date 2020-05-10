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
 
 
int a[maxn];
int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		int l=0, r=n+1;
		int suml=0, sumr=0;
		int curl=0, curr=0;
		int f = 1;
		int moves = 0;
		while(l+1<r)
		{
			++moves;
			if(f)
			{
				int tmp = 0;
				while(l+1<r && tmp<=curr)
				{
					++l;
					tmp += a[l];
					suml += a[l];
				}
				curl = tmp;
			}
			else
			{
				int tmp = 0;
				while(l+1<r && tmp<=curl)
				{
					--r;
					tmp += a[r];
					sumr += a[r];
				}
				curr = tmp;
			}
			f ^= 1;
		}
		cout<<moves<<" "<<suml<<" "<<sumr<<"\n";
	}
	return 0;
}

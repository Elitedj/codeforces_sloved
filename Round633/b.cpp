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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a, a+n);
		int l=n/2-1, r=n/2;
		for(int i=0;i<n/2;++i)
			cout<<a[r++]<<" "<<a[l--]<<" ";
		if(n&1)
			cout<<a[n-1];
		cout<<"\n";
	}
	return 0;
}

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
		int n;
		cin>>n;
		vector<int> l(n, 0), r(n, 0);
		for(int i=0;i<n;i++)
		{
			int k;
			cin>>k;
			while(k--)
			{
				int x;
				cin>>x;
				--x;
				if(!l[i] && !r[x])
				{
					l[i] = r[x] = 1;
				}
			}
		}
		int a = find(l.begin(), l.end(), 0) - l.begin();
		int b = find(r.begin(), r.end(), 0) - r.begin();
		if(a == n)
		{
			cout<<"OPTIMAL\n";
		}
		else
		{
			cout<<"IMPROVE\n";
			++a; ++b;
			cout<<a<<" "<<b<<"\n";
		}
	}
	return 0;
}

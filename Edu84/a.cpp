#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 2e6+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
using namespace std;
 
 
vector<int> v;
int init()
{
	v.push_back(0);
	int k = 1;
	int sum = 0;
	while(sum + k <= 10000005)
	{
		sum += k;
		v.push_back(sum);
		k += 2;
	}
	return v.size();
}
int main()
{
	IO;
	int si = init();
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		if(k>n || (n&1)!=(k&1) || k>=si || n<v[k])
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}

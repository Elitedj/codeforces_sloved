#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int main()
{
	ll n;
	cin>>n;
	ll tot = n*(n-1)/2;
	ll k = 1;
	while(k*(k-1) <= tot)
		k++;
	cout<<n+1-k<<"\n";
	return 0;
}

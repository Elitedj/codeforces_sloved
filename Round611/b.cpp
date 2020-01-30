#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		int a = n%k, b=n/k;
		if(a > k/2)
		{
			a = k/2;
		}
		cout<<b*k+a<<"\n";
	}
	return 0;
}

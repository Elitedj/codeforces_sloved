#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
typedef pair<int, int> P;
const int maxn = 2e3+5;
const ll mod = 1e9+7;
using namespace std;


ll b, w;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		//从底向上排，奇数列从黑开始，偶数列从白开始
		if(i&1)//奇数列
		{
			b += (x+1)/2;
			w += x/2;
		}
		else//偶数列
		{
			b += x/2;
			w += (x+1)/2;
		}
	}
	cout<<min(b, w)<<"\n";
	return 0;
}

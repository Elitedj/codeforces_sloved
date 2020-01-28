#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
typedef pair<int, int> P;
const int maxn = 5e4+5;
const ll mod = 1e9+7;
using namespace std;
 
 
bool check(int a)
{
	for(int i=2; i*i<=a; i++)
	{
		if(a%i==0)return 1;
	}
	return 0;
}
int main()
{
	int n;
	cin>>n;
	for(int i=2;;i++)
	{
		if(!check(i))continue;
		if(!check(i+n))continue;
		cout<<i+n<<" "<<i<<endl;
		break;
	}
	return 0;
}

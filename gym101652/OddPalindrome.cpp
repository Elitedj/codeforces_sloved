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
	string s;
	cin>>s;
	int f = 1;
	for(int i=1;i<s.length();i++)
		if(s[i-1] == s[i])
		{
			f=0;break;
		}
	if(f)cout<<"Odd.\n";
	else cout<<"Or not.\n";
	return 0;
}

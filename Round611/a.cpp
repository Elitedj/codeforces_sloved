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
		int h, m;
		cin>>h>>m;
		h = 23-h;
		m = 60-m;
		cout<<h*60+m<<endl;
	}
	return 0;
}

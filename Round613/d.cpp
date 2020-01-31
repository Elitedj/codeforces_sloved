#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int sloved(vector<int> v, int bit)
{
	if(bit<0 || v.size()==0)return 0;
	vector<int> l, r;
	for(auto it:v)
	{
		if((it&(1<<bit)))l.push_back(it);
		else r.push_back(it);
	}
	if(l.size()==0)return sloved(r, bit-1);
	if(r.size()==0)return sloved(l, bit-1);
	return min(sloved(r, bit-1), sloved(l, bit-1)) + (1<<bit);
}
vector<int> v;
int main()
{
	IO;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	cout<<sloved(v, 30)<<"\n";
	return 0;
}

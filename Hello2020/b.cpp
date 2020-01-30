#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
//判断是否为非递增
bool ok(vector<int> v)
{
	for(int i=1;i<v.size();i++)
		if(v[i-1] < v[i])return 0;
	return 1;
}
vector<int> st, ed;
int main()
{
	IO;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int len;
		cin>>len;
		vector<int> v(len);
		for(int j=0;j<len;j++)
			cin>>v[j];
		if(ok(v))
		{
			st.push_back(v[0]);
			ed.push_back(v.back());
		}
	}
	sort(st.begin(), st.end());
	sort(ed.begin(), ed.end());
	int ind = 0;
	ll cnt = 0;
	for(auto v:ed)
	{
		while(ind<st.size() && st[ind]<=v)ind++;
		cnt += ind;
	}
	cout<<1ll*n*n-cnt<<"\n";
	return 0;
}

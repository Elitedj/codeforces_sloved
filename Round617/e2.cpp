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
 
 
int n;
string s;
vector<int> color, f;
int main()
{
	IO;
	cin>>n>>s;
	color.resize(n);
	f.resize(26, 0);
	for(int i=0;i<n;i++)
	{
		color[i] = 1;
		for(int j=s[i]-'a'+1;j<26;j++)
			color[i] = max(color[i], f[j]+1);
		f[s[i]-'a'] = color[i];
	}
	cout<<*max_element(color.begin(), color.end())<<"\n";
	for(int i=0;i<n;i++)
		cout<<color[i]<<" ";
	cout<<"\n";
	return 0;
}

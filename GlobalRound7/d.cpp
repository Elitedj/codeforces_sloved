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


int p[maxn];
int manacher(string s)
{
	int n = s.length();
	string t = "$#";
	int l = 2;
	for(int i=0;i<n;i++)
	{
		t+=s[i];
		t+='#';
		l+=2;
	}
	t+='@';
	++l;
	for(int i=0;i<l;i++)p[i]=0;
	int id = 0, mx = 0;
	int maxlen = 1, idx = 0;
	for(int i=0;i<l;i++)
	{
		p[i] = mx>i ? min(p[2*id-i], mx-i) : 1;
		while(t[i+p[i]] == t[i-p[i]]) ++p[i];
		if(mx < p[i]+i)
		{
			mx = p[i]+i;
			id = i;
		}
		if(maxlen < p[i]-1)
		{
			if((i-p[i])/2 == 0)
			{
				maxlen = p[i]-1;
				idx = i;
			}
		}
	}
	return idx;
}

int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		string ans = "";
		int n = s.length();
		int i;
		for(i=0;i<n/2;i++)
			if(i==n-i-1)break;
			else if(s[i]!=s[n-i-1])
				break;
		string tmp = s.substr(0, i);
		ans += tmp;
		s = s.substr(i, n-2*i);
		int idx = -1, maxlen = 1;
		idx = manacher(s);
		maxlen = p[idx]-1;
		reverse(s.begin(), s.end());
		int idx2 = -1;
		idx2 = manacher(s);
		if(p[idx2]-1 > maxlen)
		{
			int len = p[idx2]-1;
			if(len==0)++len;
			ans += s.substr(0, len);
			reverse(tmp.begin(), tmp.end());
			ans += tmp;
		}
		else
		{
			if(maxlen==0)++maxlen;
			reverse(s.begin(), s.end());
			reverse(tmp.begin(), tmp.end());
			ans += s.substr(0, maxlen);
			ans += tmp;
		}
		cout<<ans<<"\n";
	}
	return 0;
}

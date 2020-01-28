#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
typedef pair<int, int> P;
const int maxn = 2e3+5;
const ll mod = 1e9+7;
using namespace std;
 
 
int main()
{
	int n, k;
	string s;
	cin>>n>>k;
	cin>>s;
	cout<<n<<"\n";
	string t = s.substr(0, k);
	for(int i=k;i<n;i++)
		t += t[i-k];
	if(t>=s) cout<<t<<"\n";
	else
	{
		for(int i=k-1;i>=0;i--)
		{
			if(t[i]=='9')
				t[i]='0';
			else
			{
				t[i]++;
				break;
			}
		}
		for(int i=k;i<n;i++)
			t[i] = t[i-k];
		cout<<t<<"\n";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e5+5;
 
 
char s[maxn];
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, k;
		scanf("%d%d", &n, &k);
		scanf("%s", s);
		sort(s, s+n);
		if(s[0] == s[k-1])
		{
			printf("%c", s[0]);
			if(k<n && s[k]==s[n-1])
			{
				for(int i=0;i<(n-k-1)/k+1;i++)
					printf("%c", s[k]);
				printf("\n");
			}
			else
			{
				for(int i=k;i<n;i++)
					printf("%c", s[i]);
				printf("\n");
			}
		}
		else
			printf("%c\n", s[k-1]);
	}
	return 0;
}

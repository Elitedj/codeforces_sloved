#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
using namespace std;
 
 
int main()
{
	IO;
	int n, m, k;
	cin>>n>>m>>k;
	for(int i=1;i<=2*k;i++)
	{
		int x, y;
		cin>>x>>y;
	}
	cout<<n+m+n*m-2<<"\n";
	for(int i=1;i<=n-1;i++) cout<<"U";
	for(int i=1;i<=m-1;i++) cout<<"L";
	for(int i=1;i<=n;i++)
	{
		char ch = 'R';
		if(i%2==0) ch='L';
		for(int j=1;j<=m-1;j++) cout<<ch;
		cout<<"D";
	}
	cout<<"\n";
	return 0;
}

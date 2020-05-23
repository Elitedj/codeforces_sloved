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
const int maxn = 2e5+5;
 
 
struct node
{
	int l, r, len;
	node(int ll=0, int rr=0, int lenn=0)
	{
		l=ll; r=rr; len=lenn;
	}
};
vector<node> v;
int ans[maxn];
void init(int l, int r, int len)
{
	if(r<l) return;
	v.push_back(node(l, r, len));
	int mid = len%2==1 ? (l+r)/2 : (l+r-1)/2;
	init(l, mid-1, mid-1-l+1);
	init(mid+1, r, r-(mid+1)+1);
}
bool cmp(node a, node b)
{
	if(a.len != b.len) return a.len>b.len;
	else return a.l<b.l;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		v.clear();
		init(1, n, n);
		sort(v.begin(), v.end(), cmp);
		int cnt = 1;
		for(auto n:v)
		{
			int idx = n.len%2==1 ? (n.l+n.r)/2 : (n.l+n.r-1)/2;
			ans[idx] = cnt++;
		}
		for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
		cout<<"\n";
	}
	return 0;
}

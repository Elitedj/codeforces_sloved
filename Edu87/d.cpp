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
const int maxn = 1e6+5;
 
 
int tree[maxn<<2];
void insert(int rt, int l, int r, int id, int v)
{
	if(l == r)
	{
		tree[rt] += v;
		return;
	}
	int mid = (l+r)>>1;
	if(id <= mid) insert(rt<<1, l, mid, id, v);
	else insert(rt<<1|1, mid+1, r, id, v);
	tree[rt] = tree[rt<<1] + tree[rt<<1|1];
}
int query(int rt, int l, int r, int k)
{
	if(l == r) return l;
	int mid = (l+r)>>1;
	if(k <= tree[rt<<1]) 
		return query(rt<<1, l, mid, k);
	else
		return query(rt<<1|1, mid+1, r, k-tree[rt<<1]);
}
int main()
{
	IO;
	int n, q;
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		insert(1, 1, n, x, 1);
	}
	while(q--)
	{
		int op;
		cin>>op;
		if(op > 0)
			insert(1, 1, n, op, 1);
		else
		{
			int val = query(1, 1, n, -1*op);
			//DEBUG(val);
			insert(1, 1, n, val, -1);
		}
	}
	if(tree[1] == 0) cout<<"0\n";
	else cout<<query(1, 1, n, 1);
	return 0;
}

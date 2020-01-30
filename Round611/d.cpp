#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define IO ios::sync_with_stdio(0)
typedef pair<int, int> P;
const int maxn = 2e5+5;
const ll mod = 1e9+7;
using namespace std;
 
 
priority_queue<P, vector<P>, greater<P> > q;
set<int> use;
vector<int> ans;
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		int x;
		scanf("%d", &x);
		use.insert(x);
		q.push(P(1, x+1));
		q.push(P(1, x-1));
	}
	ll step = 0;
	while(ans.size() < m)
	{
		P p = q.top();
		q.pop();
		if(!use.count(p.second))
		{
			step += p.first;
			ans.push_back(p.second);
			use.insert(p.second);
			q.push(P(p.first+1, p.second+1));
			q.push(P(p.first+1, p.second-1));
		}
	}
	printf("%lld\n", step);
	for(auto v:ans)printf("%d ", v);
	printf("\n");
	return 0;
}

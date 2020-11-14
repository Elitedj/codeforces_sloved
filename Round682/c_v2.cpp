#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e6 + 5;
 
const int MAXV = 10000;
 
struct two_sat {
	vector<int> adj[MAXV * 2 + 5];
	vector<int> radj[MAXV * 2 + 5];
	int visit[MAXV * 2 + 5];
	int ans[MAXV * 2 + 5];
	int finish[MAXV * 2 + 5];
	int scc[MAXV * 2 + 5];
	int n, cur;
	void init(int num_var)
	{
		n = num_var;
		for (int i = 0; i <= n * 2; i++) {
			adj[i].clear();
			visit[i] = 0;
			ans[i] = 0;
			finish[i] = 0;
			scc[i] = 0;
		}
	}
	void addClause(int A, bool TA, int B, bool TB)
	{
		A = A << 1 | TA;
		B = B << 1 | TB;
		adj[A ^ 1].push_back(B);
		adj[B ^ 1].push_back(A);
		radj[A].push_back(B ^ 1);
		radj[B].push_back(A ^ 1);
	}
	void dfs1(int x)
	{
		visit[x] = 1;
		for (int i = 0; i < (int)adj[x].size(); i++)
			if (!visit[adj[x][i]])
				dfs1(adj[x][i]);
		finish[cur++] = x;
	}
	void dfs2(int x)
	{
		scc[x] = cur;
		visit[x] = 1;
		for (int i = 0; i < (int)radj[x].size(); i++)
			if (!visit[radj[x][i]])
				dfs2(radj[x][i]);
	}
	bool sat()
	{
		cur = 0;
		memset(visit, 0, sizeof(visit));
		for (int i = 0; i < n * 2; i++)
			if (!visit[i]) dfs1(i);
		cur = 0;
		memset(visit, 0, sizeof(visit));
		for (int i = n * 2 - 1; i >= 0; i--) {
			int x = finish[i];
			if (!visit[x]) {
				dfs2(x);
				cur++;
			}
		}
		for (int i = 0; i < 2 * n; i += 2)
			if (scc[i] == scc[i ^ 1]) return false;
		memset(ans, 0, sizeof(ans));
		for (int i = 0; i < n * 2; i++) {
			int x = finish[i];
			if (!ans[scc[x]]) {
				ans[scc[x]] = 1;
				ans[scc[x ^ 1]] = -1;
			}
		}
		return true;
	}
	bool T(int x)
	{
		return ans[scc[x << 1]] == -1;
	}
};
 
int n, m;
 
int a[105][105];
 
int getidx(int x, int y) {
	return x * m + y;
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	int t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				scanf("%d", &a[i][j]);
		two_sat ts;
		ts.init(n * m);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (i) {
					if (a[i][j] == a[i - 1][j]) {
						ts.addClause(getidx(i, j), false, getidx(i - 1, j), false);
						ts.addClause(getidx(i, j), true, getidx(i - 1, j), true);
					} else if (a[i][j] + 1 == a[i - 1][j]) {
						ts.addClause(getidx(i, j), false, getidx(i - 1, j), true);
					} else if (a[i][j] == a[i - 1][j] + 1) {
						ts.addClause(getidx(i, j), true, getidx(i - 1, j), false);
					}
				}
				if (j) {
					if (a[i][j] == a[i][j - 1]) {
						ts.addClause(getidx(i, j), false, getidx(i, j - 1), false);
						ts.addClause(getidx(i, j), true, getidx(i, j - 1), true);
					} else if (a[i][j] + 1 == a[i][j - 1]) {
						ts.addClause(getidx(i, j), false, getidx(i, j - 1), true);
					} else if (a[i][j] == a[i][j - 1] + 1) {
						ts.addClause(getidx(i, j), true, getidx(i, j - 1), false);
					}
				}
			}
		}
		ts.sat();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (ts.T(getidx(i, j))) printf("%d ", a[i][j] + 1);
				else printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

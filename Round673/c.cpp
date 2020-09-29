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
const int maxn = 3e5+5;
 
 
int t;
 
vector<int> num[maxn];
int ans[maxn];
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) {
		num[i].clear();
		ans[i] = inf;
	}
	for (int i=1; i<=n; i++) {
		int x;
		cin >> x;
		num[x].push_back(i);
	}
	for (int i=1; i<=n; i++) {
		num[i].push_back(n+1);
		int mx = -1, last = 0;
		for (int j=0; j<num[i].size(); j++) {
			mx = max(mx, num[i][j] - last);
			last = num[i][j];
		}
		ans[mx] = min(ans[mx], i);
	}
	for (int i=2; i<=n; i++) {
		ans[i] = min(ans[i], ans[i-1]);
	}
	for (int i=1; i<=n; i++) {
		if (ans[i] == inf) cout << -1 << ' ';
		else cout << ans[i] << ' ';
	}
	cout << '\n';
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

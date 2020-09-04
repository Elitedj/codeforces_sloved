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
 
int t;
int down[maxn], up[maxn];
ll pre[maxn];
void slove() {
	int n, d, m;
	cin >> n >> d >> m;
	int top1 = 0, top2 = 0;
	for (int i=1; i<=n; i++) {
		int x;
		cin >> x;
		if (x > m) up[++top2] = x;
		else down[++top1] = x;
	}
	sort(down+1, down+1+top1); reverse(down+1, down+1+top1);
	sort(up+1, up+1+top2); reverse(up+1, up+1+top2);
	for (int i=1; i<=n; i++) pre[i] = pre[i-1] + down[i];
	ll summ = 0, ans = pre[n];
	for (int i=1; i<=top2; i++) {
		summ += up[i];
		int yu = (i-1) * (d+1) + 1;
		if (yu > n) break;
		yu = n - yu;
		ans = max(ans, pre[yu] + summ);
	}
	cout << ans << '\n';
}
 
int main() {
	t = 1;
	//cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

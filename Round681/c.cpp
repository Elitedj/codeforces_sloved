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
const int maxn = 3e5 + 5;
 
int t;
 
struct node {
	ll a, b;
}no[maxn];
 
bool cmp(node a, node b) {
	return a.a == b.a ? a.b < b.b : a.a < b.a;
}
 
ll pre[maxn];
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> no[i].a;
	for (int i=1; i<=n; i++) cin >> no[i].b;
	sort(no + 1, no + n + 1, cmp);
	ll ans = INF;
	for (int i=1; i<=n; i++) pre[i] = pre[i-1] + no[i].b;
	ll mx = 0;
	for (int i=0; i<=n; i++) {
		mx = max(mx, no[i].a);
		ans = min(ans, max(mx, pre[n] - pre[i]));
	}
	cout << ans << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	cin >> t;
	while (t--) slove();
	return 0;
}

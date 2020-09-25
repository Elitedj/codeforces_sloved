#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<ll, ll> P;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 3e5+5;
 
 
int t;
 
ll ans;
vector<int> a;
int n, q;
void add(int x, int c) {
	if (x == 0 || x == n + 1) return;
	if (a[x] > a[x - 1] && a[x] > a[x + 1]) ans += a[x] * c;
	if (a[x] < a[x - 1] && a[x] < a[x + 1]) ans -= a[x] * c;
}
 
void slove() {
	cin >> n >> q;
	a = vector<int>(n+2);
	for (int i=1; i<=n; i++) cin >> a[i];
	ans = 0;
	for (int i=1; i<=n; i++)
		add(i, 1);
	cout << ans << '\n';
	while (q--) {
		int l, r;
		cin >> l >> r;
		for (int i = -1; i <= 1; i++) {
			add(l + i, -1);
			if (r + i > l + 1)
				add(r + i, -1);
		}
		swap(a[l], a[r]);
		for (int i = -1; i <= 1; i++) {
			add(l + i, 1);
			if (r + i > l + 1)
				add(r + i, 1);
		}
		cout << ans << '\n';
	}
}
 
int main() {
	IO;
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
}

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
 
int a[maxn], b[maxn], f[maxn], pos[maxn];
 
void slove() {
	int n, k;
	cin >> n >> k;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
		pos[a[i]] = i;
	}
	for (int i=1; i<=k; i++) {
		cin >> b[i];
		b[i] = pos[b[i]];
	}
	for (int i=0; i<=n+1; i++) f[i] = 0;
	f[0] = f[n + 1] = 1;
	for (int i=1; i<=k; i++) f[b[i]] = 1;
	int ans = 1;
	for (int i=1; i<=k; i++) {
		if (f[b[i] - 1] && f[b[i] + 1]) {
			ans = 0;
			break;
		}
		if (!f[b[i] - 1] && !f[b[i] + 1]) {
			ans = ans * 2 % mod;
		}
		f[b[i]] = 0;
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

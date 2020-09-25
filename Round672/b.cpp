#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<ll, ll> P;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5+5;
 
 
int t;
 
int a[maxn];
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	map<int, int> cnt;
	for (int i=1; i<=n; i++) {
		int c = 0;
		while (a[i]) {
			++c;
			a[i] >>= 1;
		}
		cnt[c]++;
	}
	ll ans = 0;
	for (auto v:cnt) {
		if (v.second == 1) continue;
		ans += 1ll * (v.second - 1) * (v.second) / 2;
	}
	cout << ans << '\n';
}
 
int main() {
	IO;
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
}

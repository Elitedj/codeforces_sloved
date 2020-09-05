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
 
int a[maxn];
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	ll ans = 0;
	vector<int> c1(n+1), c2(n+1);
	for (int i=1; i<=n; i++) {
		fill(c1.begin(), c1.end(), 0);
		fill(c2.begin(), c2.end(), 0);
		for (int j=i+1; j<=n; j++)
			++c2[a[j]];
		ll sum = 0;
		for (int j=i+1; j<=n; j++) {
			sum -= c1[a[j]];
			--c2[a[j]];
			if (a[i] == a[j])
				ans += sum;
			sum += c2[a[j]];
			++c1[a[j]];
		}
	}
	cout << ans << '\n';
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

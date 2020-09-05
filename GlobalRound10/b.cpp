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
const int maxn = 2e5+5;
 
int t;
int a[maxn];
void slove() {
	int n;
	ll k;
	cin >> n >> k;
	for (int i=1; i<=n; i++) cin >> a[i];
	k--;
	int maxx = -inf;
	for (int i=1; i<=n; i++)
		maxx = max(maxx, a[i]);
	for (int i=1; i<=n; i++)
		a[i] = maxx - a[i];
	if (k&1) {
		int maxx = -inf;
		for (int i=1; i<=n; i++)
			maxx = max(maxx, a[i]);
		for (int i=1; i<=n; i++)
			a[i] = maxx - a[i];
	}
	for (int i=1; i<=n; i++) cout << a[i] << ' ';
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

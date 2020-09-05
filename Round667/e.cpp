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
 
int x[maxn], y[maxn];
void slove() {
	int n, k;
	cin >> n >> k;
	for (int i=0; i<n; i++) cin >> x[i];
	for (int i=0; i<n; i++) cin >> y[i];
	sort(x, x+n);
	vector<int> rmx(n), mx(n+1);
	for (int i=0, j=0; i<n; i++) {
		while (j<n && x[j] <= x[i] + k) j++;
		rmx[i] = j;
	}
	for (int i=n-1; i>=0; i--) {
		mx[i] = max(mx[i+1], rmx[i] - i);
	}
	int ans = 0;
	for (int i=0; i<n; i++) {
		ans = max(ans, rmx[i] - i + mx[rmx[i]]);
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

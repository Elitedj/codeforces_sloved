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
const int maxn = 1e6+5;
 
 
int t;
 
int a[maxn];
int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a%b);
}
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	sort(a+1, a+n+1);
	reverse(a+1, a+n+1);
	int g = a[1];
	vector<int> vis(n+1);
	vis[1] = 1;
	vector<int> ans;
	ans.push_back(a[1]);
	for (int i=2; i<=n; i++) {
		int gg = 0, idx = -1;
		for (int j=2; j<=n; j++) {
			if (vis[j]) continue;
			int tmp = gcd(g, a[j]);
			if (tmp > gg) {
				gg = tmp;
				idx = j;
			}
		}
		vis[idx] = 1;
		g = gg;
		ans.push_back(a[idx]);
	}
	for (auto v:ans) cout << v << ' ';
	cout << '\n';
}
 
int main() {
	IO;
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

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
 
void slove() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n, 0);
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	set<int> used;
	int f = 0;
	vector<int> ans(n, 0);
	for (int i=0; i<n; i++) {
		int v = a[i];
		if (v + v == k) {
			if (f ^= 1)
				ans[i] = 1;
		} else if (used.count(k - v))
			ans[i] = 1;
		else used.insert(v);
	}
	for (int i=0; i<n; i++) cout << ans[i] << ' ';
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

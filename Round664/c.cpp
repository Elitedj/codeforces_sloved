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
int n, m, a[250], b[250];
 
bool check(int x) {
	for (int i=1; i<=n; i++) {
		int f = 0;
		for (int j=1; j<=m; j++) {
			if (((a[i] & b[j]) | x) == x) {
				f = 1;
				break;
			}
		}
		if (!f) return 0;
	}
	return 1;
}
 
void slove() {
	cin >> n>> m;
	for (int i=1; i<=n; i++) cin >> a[i];
	for (int i=1; i<=m; i++) cin >> b[i];
	for (int i=0; i<=512; i++) {
		if (check(i)) {
			cout << i << '\n';
			return;
		}
	}
}
 
int main() {
	t = 1;
	//cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

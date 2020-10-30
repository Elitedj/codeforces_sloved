#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 1e9 + 7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e3 + 5;
 
int t;
 
void slove() {
	int l, r;
	cin >> l >> r;
	int ans = r + 1;
	if (1.0 * l >= (1.0 * ans) / 2.0) {
		cout << "YES\n";
		return;
	}
	ans = l * 2 / 3;
	if (2 * l > r) {
		cout << "YES\n";
		return;
	}
	cout << "NO\n";
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	cin >> t;
	while (t--) slove();
	return 0;
}

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
const int maxn = 2e5 + 5;
 
int t;
 
void slove() {
	int n;
	cin >> n;
	int tar = n;
	while (1) {
		int ok = 1;
		for (int i=2; i*i<=tar; i++) {
			if (tar % i == 0) {
				ok = 0;
				break;
			}
		}
		if (ok == 0) {
			tar++;
			continue;
		}
		ok = 0;
		for (int i=2; i*i<=tar-(n-1); i++) {
			if ((tar-(n-1)) % i == 0) {
				ok = 1;
				break;
			}
		}
		if (ok) break;
		tar++;
	}
	tar -= n - 1;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			if (i == j) cout << tar << ' ';
			else cout << "1 ";
		}
		cout << '\n';
	}
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	cin >> t;
	while (t--) slove();
	return 0;
}

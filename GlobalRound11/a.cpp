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
const int maxn = 1e6 + 5;
 
int t;
 
int n;
int a[100];
 
void slove() {
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	int sum = 0;
	for (int i=1; i<=n; i++) sum += a[i];
	if (sum == 0) cout << "NO\n";
	else {
		cout << "YES\n";
		if (sum > 0) {
			sort(a + 1, a + n + 1, greater<int>());
		} else {
			sort(a + 1, a + n + 1);
		}
		for (int i=1; i<=n; i++) cout << a[i] << ' ';
		cout << '\n';
	}
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	// freopen("myout.txt", "w", stdout);
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

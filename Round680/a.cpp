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
const int maxn = 1e5 + 5;
 
int t;
 
int a[maxn], b[maxn];
void slove() {
	int n, x;
	cin >> n >> x;
	for (int i=1; i<=n; i++) cin >> a[i];
	for (int i=1; i<=n; i++) cin >> b[i];
	sort(a + 1, a + n + 1);
	sort(b + 1, b + n + 1);
	reverse(b + 1, b + n + 1);
	for (int i=1; i<=n; i++) {
		if (a[i] + b[i] > x) {
			cout << "No\n";
			return;
		}
	}
	cout << "Yes\n";
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	cin >> t;
	while (t--) slove();
	return 0;
}

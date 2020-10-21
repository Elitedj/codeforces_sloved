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
const int maxn = 3e5 + 5;
 
int t;
 
int a[maxn];
 
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	int ok = 0;
	for (int i=2; i<=n; i++) {
		if (a[i] != a[i-1]) {
			ok = 1;
			break;
		}
	}
	if(!ok) {
		cout << "-1\n";
		return;
	}
	int mx = -1;
	for (int i=1; i<=n; i++) {
		mx = max(mx, a[i]);
	}
	for (int i=1; i<=n; i++) {
		if (a[i] == mx) {
			int cnt = 0;
			if (i-1 >= 1 && a[i-1] != a[i]) cnt++;
			if (i+1 <=n && a[i+1] != a[i]) cnt++;
			if (cnt > 0) {
				cout << i << '\n';
				return;
			}
		}
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

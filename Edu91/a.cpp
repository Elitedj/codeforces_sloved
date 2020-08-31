#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e6+5;
 
 
int a[maxn];
int l[maxn], r[maxn];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i=1; i<=n; i++) cin >> a[i];
		l[1] = 1;
		r[n] = n;
		for (int i=2; i<=n; i++) {
			if (a[i] < a[l[i-1]]) l[i] = i;
			else l[i] = l[i-1];
		}
		for (int i=n-1; i>=1; i--) {
			if (a[i] < a[r[i+1]]) r[i] = i;
			else r[i] = r[i+1];
		}
		//for (int i=1; i<=n; i++) cout << "--->" << l[i] << ' ' << r[i] << '\n';
		int ok = 0;
		for (int i=2; i<=n-1; i++) {
			if (a[i] > a[l[i]] && a[i] > a[r[i]]) {
				cout << "YES\n";
				cout << l[i] << ' ' << i << ' ' << r[i] << '\n';
				ok = 1;
				break;
			}
		}
		if (!ok) cout << "NO\n";
	}
}

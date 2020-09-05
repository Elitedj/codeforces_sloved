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
 
int a[maxn], b[maxn];
 
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	int minn = inf;
	for (int i=1; i<=n; i++) {
		b[i] = a[i];
		minn = min(minn, a[i]);
	}
	sort(b+1, b+n+1);
	for (int i=1; i<=n; i++) {
		if(a[i] != b[i] && (a[i]%minn || b[i]%minn)) {
			cout << "NO\n";
			return ;
		}
	}
	cout << "YES\n";
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

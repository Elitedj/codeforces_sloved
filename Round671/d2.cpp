#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<ll, ll> P;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5+5;
 
 
int t;
 
int a[maxn];
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	sort(a+1, a+n+1);
	vector<int> ans(n+1);
	int pos = 2;
	int idx = 1;
	for ( ; pos<=n; pos+=2, idx++) ans[pos] = a[idx];
	pos = 1;
	for ( ; pos<=n; pos+=2, idx++) ans[pos] = a[idx];
	int res = 0;
	for (int i=2; i<n; i+=2) {
		if (ans[i] < ans[i-1] && ans[i] < ans[i+1]) res++;
	}
	cout << res << '\n';
	for (int i=1; i<=n; i++) cout << ans[i] << ' ';
	cout << '\n';
}
 
int main() {
	IO;
	t = 1;
	//cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

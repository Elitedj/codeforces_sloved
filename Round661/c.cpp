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
int a[maxn];
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	vector<int> cnt(2*n+1, 0);
	for (int i=1; i<=n; i++) cnt[a[i]]++;
	int ans = 0;
	for (int i=2; i<=2*n; i++) {
		int sum = 0;
		vector<int> tmp = cnt;
		for (int j=1; j<=i-1; j++) {
			if (tmp[j] == 0) continue;
			int ttmp = min(tmp[j], tmp[i-j]);
			if (j == i-j) ttmp = tmp[j] / 2;
			sum += ttmp;
			tmp[i-j] -= ttmp;
			tmp[j] -= ttmp;
		}
		ans = max(ans, sum);
	}
	cout << ans << '\n';
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

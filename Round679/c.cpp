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
 
int a[10];
vector<P> dis;
int cnt[maxn];
void slove() {
	for (int i=1; i<=6; i++) cin >> a[i];
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) {
		int x;
		cin >> x;
		for (int j=1; j<=6; j++)
			dis.push_back(P(x - a[j], i));
	}
	sort(dis.begin(), dis.end());
	int l = 1, r = 1, ans = inf, len = 0;
	while (r < (int)dis.size()) {
		while (r < (int)dis.size() && len < n) {
			if (cnt[dis[r].second] == 0) len++;
			cnt[dis[r].second]++;
			r++;
		}
		if (l < r && len == n) ans = min(ans, dis[r - 1].first - dis[l].first);
		cnt[dis[l].second]--;
		if (cnt[dis[l].second] == 0) len--;
		l++;
	}
	cout << ans << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	// cin >> t;
	while (t--) slove();
	return 0;
}

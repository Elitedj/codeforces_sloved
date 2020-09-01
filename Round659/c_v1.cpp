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
const int maxn = 3e5+5;
 
 
int n, m, t;
 
void slove() {
	cin >> n;
	string a, b;
	cin >> a >> b;
	for (int i=0; i<n; i++) {
		if (a[i] > b[i]) {
			cout << "-1\n";
			return;
		}
	}
	int ans = 0;
	for (int i='a'; i<='t'; i++) {
		vector<int> cnt;
		for (int j=0; j<n; j++) {
			if (a[j] == i && a[j] != b[j]) {
				cnt.push_back(b[j] - a[j]);
			}
		}
		if (cnt.empty()) continue;
		sort(cnt.begin(), cnt.end());
		for (int j=0; j<n; j++) {
			if (a[j]==i && a[j] != b[j]) {
				a[j] += cnt[0];
			}
		}
		ans++;
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

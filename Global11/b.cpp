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
 
 
void slove() {
	int n, k;
	string s;
	cin >> n >> k >> s;
	int ans = 0;
	for (int i=0; i<n; i++) {
		ans += s[i] == 'W';
	}
	for (int i=0; i<n-1; i++) {
		ans += (s[i] == 'W' && s[i+1] == 'W');
	}
	vector<int> a;
	int fb = 0;
	for (int i=0; i<n; i++) {
		if (s[i] == 'W') continue;
		int f = i == 0;
		int cnt = 0;
		while (i < n && s[i] == 'L') i++, cnt++;
		f |= i == n;
		if (f) fb += cnt;
		else a.push_back(cnt);
		i--;
	}
	if (ans == 0) {
		cout << max(0, 2 * k - 1) << '\n';
		return;
	}
	sort(a.begin(), a.end());
	for (auto v : a) {
		while (k && v) {
			if (v == 1) ans += 3;
			else ans += 2;
			k--, v--;
		}
	}
	while (k && fb) {
		ans += 2;
		k--, fb--;
	}
	cout << ans << '\n';
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

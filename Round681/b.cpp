#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 3e5 + 5;
 
int t;
 
void slove() {
	int a, b;
	cin >> a >> b;
	string s;
	cin >> s;
	int n = s.length();
	int ok = 1;
	for (int i=0; i<n; i++) {
		if (s[i] == '1') {
			ok = 0;
			break;
		}
	}
	if (ok) {
		cout << "0\n";
		return;
	}
	int l = 0, r = n - 1;
	while (l < n && s[l] == '0') l++;
	while (r >= 0 && s[r] == '0') r--;
	vector<int> zero;
	while (l < r) {
		if (s[l] == '1') {
			l++;
			continue;
		}
		int cnt = 1;
		while (l+1 < r && s[l+1]=='0') cnt++, l++;
		zero.push_back(cnt);
		l++;
	}
	int ans = a * ((int)zero.size() + 1);
	sort(zero.begin(), zero.end());
	for (auto v:zero) {
		if (v * b <= a) {
			ans -= a;
			ans += v * b;
		}
	}
	cout << ans << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	cin >> t;
	while (t--) slove();
	return 0;
}

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
const int maxn = 2e5 + 5;
 
int t;
 
void slove() {
	int n;
	string s;
	cin >> n >> s;
	vector<int> a;
	for (int i=0; i<n; i++) {
		int j = i;
		while (j + 1 < n && s[j + 1] == s[i]) j++;
		a.push_back(j - i + 1);
		i = j;
	}
	int ans = 0;
	int sz = a.size();
	for (int i=0, j=0; i<sz; i++) {
		ans++;
		j = max(i, j);
		while (j < sz && a[j] == 1) j++;
		if (j == sz) {
			j--;
			sz--;
		} else {
			a[j]--;
		}
	}
	cout << ans << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	// freopen("myout.txt", "w", stdout);
	IO;
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

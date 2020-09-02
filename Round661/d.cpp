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
 
void slove() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int> one, zero;
	for (int i=0; i<n; i++) {
		if (s[i] == '0') zero.push_back(i);
		else one.push_back(i);
	}
	vector<int> ans(n, 0);
	vector<int> vis(n, 0);
	int idx = 1;
	for (int i=0; i<n; i++) {
		if (vis[i]) continue;
		int pos = -1;
		int tar = s[i];
		while (1) {
			if (tar == '1') {
				auto p = lower_bound(one.begin(), one.end(), pos);
				if (p == one.end()) break;
				ans[*p] = idx;
				vis[*p] = 1;
				pos = *p;
				tar = '0';
				one.erase(p);
			} else {
				auto p = lower_bound(zero.begin(), zero.end(), pos);
				if (p == zero.end()) break;
				ans[*p] = idx;
				vis[*p] = 1;
				pos = *p;
				tar = '1';
				zero.erase(p);
			}
		}
		idx++;
	}
	cout << idx -1 << '\n';
	for (int v:ans) cout << v << ' ';
	cout << '\n';
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

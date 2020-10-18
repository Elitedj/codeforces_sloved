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
const int maxn = 1e5 + 5;
 
int t;
 
int n;
int a[maxn];
vector<P> ans, id[4];
 
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	int f = 1;
	int tot = n;
	for (int i=n; i>=1; i--) {
		if (a[i] == 0) continue;
		if (a[i] == 1) {
			int x = tot--;
			id[1].push_back(P(x, i));
			ans.push_back(P(x, i));
		} else if (a[i] == 2) {
			if (id[1].empty()) {
				f = 0;
				break;
			} else {
				P p = id[1].back();
				id[1].pop_back();
				id[2].push_back(P(p.first, i));
				ans.push_back(P(p.first, i));
			}
		} else {
			if (id[3].size()) {
				P p = id[3].back();
				id[3].pop_back();
				int x = tot--;
				id[3].push_back(P(x, i));
				ans.push_back(P(x, i));
				ans.push_back(P(x, p.second));
			} else if (id[2].size()) {
				P p = id[2].back();
				id[2].pop_back();
				int x = tot--;
				id[3].push_back(P(x, i));
				ans.push_back(P(x, i));
				ans.push_back(P(x, p.second));
			} else if (id[1].size()) {
				P p = id[1].back();
				id[1].pop_back();
				int x = tot--;
				id[3].push_back(P(x, i));
				ans.push_back(P(x, i));
				ans.push_back(P(x, p.second));
			} else {
				f = 0;
				break;
			}
		}
	}
	if (!f) cout << "-1\n";
	else {
		cout << ans.size() << '\n';
		for (auto v:ans) cout << v.first << ' ' << v.second << '\n';
	}
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	// freopen("myout.txt", "w", stdout);
	IO;
	t = 1;
	// cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

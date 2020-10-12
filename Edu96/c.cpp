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
int a[maxn];
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) a[i] = 1;
	vector<P> ans;
	int pos = n;
	for (int i=1; i<n; i++) {
		while (pos - 1 >= 1 && a[pos] == 0) pos--;
		int tmp = pos - 1;
		if (a[pos] == 1)
			while (a[tmp] == 0) tmp--;
		else tmp = pos;
		ans.push_back(P(tmp, pos));
		a[(tmp + pos + 1) / 2]++;
		a[pos]--;
		a[tmp]--;
	}
	for (int i=1; i<=n; i++) {
		if (a[i] != 0) {
			cout << i << '\n';
			break;
		}
	}
	for (auto v:ans) cout << v.first << ' ' << v.second << '\n';
	// cout << "=====\n";
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

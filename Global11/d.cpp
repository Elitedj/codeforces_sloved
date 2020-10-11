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
 
int n;
 
int check(vector<int> a) {
	for (int i=0; i<n-1; i++) {
		if (a[i] > a[i + 1]) return 1;
	}
	return 0;
}
 
void slove() {
	cin >> n;
	vector<int> a;
	for (int i=1; i<=n; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}
	vector<vector<int> > ans;
	while (check(a)) {
		for (int x=2; x<=n; x++) {
			int foo = -1, bar = -1;
			for (int i=0; i<n; i++) {
				if (a[i] == x) foo = i;
				if (a[i] == x - 1) bar = i;
			}
			if (foo < bar) {
				int fi = foo, la = n - 1 - bar;
				int p = foo;
				while (a[p + 1] == a[p] + 1) p++;
				vector<int> t;
				if (fi) t.push_back(fi);
				t.push_back(p - foo + 1);
				t.push_back(bar - p);
				if (la) t.push_back(n - 1 - bar);
				ans.push_back(t);
				vector<int> tmp;
				for (int i=bar+1; i<n; i++) tmp.push_back(a[i]);
				for (int i=p+1; i<=bar; i++) tmp.push_back(a[i]);
				for (int i=foo; i<=p; i++) tmp.push_back(a[i]);
				for (int i=0; i<foo; i++) tmp.push_back(a[i]);
				a = tmp;
				break;
			}
		}
	}
	cout << ans.size() << '\n';
	for (auto v:ans) {
		cout << v.size() << ' ';
		for (auto vv:v) cout << vv << ' ';
		cout << '\n';
	}
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	// freopen("myout.txt", "w", stdout);
	t = 1;
	// cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

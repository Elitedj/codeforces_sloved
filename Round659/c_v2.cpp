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
 
int fa[100];
int find(int x) {
	return fa[x] = fa[x] == x ? x : find(fa[x]);
}
void join(int x, int y) {
	fa[find(x)] = find(y);
}
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
	for (int i=0; i<20; i++) fa[i] = i;
	for (int i=0; i<n; i++) {
		int x = a[i] - 'a';
		int y = b[i] - 'a';
		x = find(x);
		y = find(y);
		if (x == y) continue;
		join(x, y);
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

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
 
vector<int> pos[30];
int a[maxn], c[maxn];
int n;
 
void add(int x, int v) {
	for (; x<=n; x += (x&(-x))) c[x] += v;
}
 
int sum(int x) {
	int res = 0;
	for (; x; x-=(x&(-x))) res += c[x];
	return res;
}
 
void slove() {
	string s;
	cin >> n >> s;
	string revs = s;
	reverse(revs.begin(), revs.end());
	for (int i=0; i<n; i++) {
		pos[s[i] - 'a'].push_back(i + 1);
	}
	for (int i=n; i>=1; i--) {
		a[i] = pos[revs[i - 1] - 'a'].back();
		pos[revs[i - 1] - 'a'].pop_back();
	}
	ll ans = 0;
	for (int i=1; i<=n; i++) {
		add(a[i], 1);
		ans += i - sum(a[i]);
	}
	cout << ans << '\n';
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

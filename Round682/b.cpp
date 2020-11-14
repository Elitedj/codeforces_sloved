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
const int maxn = 2e5 + 5;
 
 
int t;
 
int a[maxn];
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	map<int, int> cnt;
	for (int i=1; i<=n; i++) {
		cnt[a[i]]++;
		if (cnt[a[i]] > 1) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	cin >> t;
	while (t--) slove();
	return 0;
}

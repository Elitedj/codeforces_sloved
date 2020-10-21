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
	for (int i=1; i<=n; i++) cin >> a[i];
	vector<int> blank;
	int i = 1, r = n;
	while (i <= n && a[i] == 0) i++;
	while (r >= 1 && a[r] == 0) r--;
	for (; i<=r; i++) {
		if (a[i] == 1) continue;
		int j = i;
		while (j+1 <= r && a[j+1] == 0) j++;
		blank.push_back(j-i+1);
		i = j;
	}
	int ans = 0;
	for (auto v:blank) ans += v;
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

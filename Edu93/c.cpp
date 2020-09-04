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
const int maxn = 1e5+5;
 
int t;
 
void slove() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	map<int, int> mp;
	int sum = 0;
	mp[0]++;
	ll ans = 0;
	for (int i=0; i<n; i++) {
		sum += s[i] - '0' - 1;
		ans += mp[sum];
		mp[sum]++;
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

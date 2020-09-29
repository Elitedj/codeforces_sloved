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
 
 
int t;
 
void slove() {
	int n;
	cin >> n;
	int ans = 0;
	map<ll, int> mp;
	ll sum = 0;
	mp[0] = 1;
	while (n--) {
		int x;
		cin >> x;
		sum += x;
		if (mp[sum]) {
			ans++;
			mp.clear();
			mp[0] = 1;
			sum = x;
		}
		mp[sum] = 1;
	}
	cout << ans << '\n';
}
 
int main() {
	t = 1;
	//cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

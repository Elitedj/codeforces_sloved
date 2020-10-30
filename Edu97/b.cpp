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
const int maxn = 1e3 + 5;
 
int t;
 
int fun(string s, int n, char tar) {
	int ans = 0;
	for (int i=0; i<n; i++) {
		if (s[i] == tar) {
			int j = i;
			while (j + 1 < n && s[j + 1] == tar) j++;
			int cnt = j - i + 1;
			ans += cnt - 1;
			i = j;
		}
	}
	return ans;
}
 
void slove() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	cout << max(fun(s, n, '0'), fun(s, n, '1')) << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	cin >> t;
	while (t--) slove();
	return 0;
}

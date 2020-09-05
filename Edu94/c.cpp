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
	string s;
	int x;
	cin >> s >> x;
	string ans(s.length(), '1');
	for (int i=0; i<s.length(); i++) {
		if (s[i] == '1') continue;
		if (i-x >= 0)
			ans[i-x] = '0';
		if(i+x < s.length())
			ans[i+x] = '0';
	}
	int ok = 1;
	for (int i=0; i<s.length(); i++) {
		if (s[i] == '1') {
			ok &= (i-x >= 0 && ans[i-x] == '1') || (i + x < s.length() && ans[i+x] == '1');
		}
	}
	cout << (ok ? ans : "-1") << '\n';
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

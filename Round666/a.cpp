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
 
 
int n, t;
void slove() {
	int n;
	vector<int> cnt(26, 0);
	cin >> n;
	for (int i=1; i<=n; i++) {
		string s;
		cin >> s;
		int sz = s.length();
		for (int j=0; j<sz; j++)
			cnt[s[j] - 'a']++;
	}
	int ok = 1;
	for (auto v:cnt) {
		if (v % n != 0) {
			ok = 0;
			break;
		}
	}
	if (ok) cout << "YES\n";
	else cout << "NO\n";
}
 
int main() {
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

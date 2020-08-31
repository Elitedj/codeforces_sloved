#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e6+5;
 
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		int r=0, s=0, p=0;
		int n = str.length();
		for (int i=0; i<n; i++) {
			if (str[i] == 'S') s++;
			else if (str[i] == 'P') p++;
			else r++;
		}
		char ans;
		if (r >= p && r >= s) ans = 'P';
		else if (p >= r && p >= s) ans = 'S';
		else ans = 'R';
		cout << string(n, ans) << '\n';
	}
	return 0;
}

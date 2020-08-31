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
 
 
string need = "abacaba";
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		string ans;
		for(int i=0; i<=n-7; i++) {
			string t = s;
			int ok = 1;
			for(int j=0; j<7; j++) {
				if(t[i+j] != need[j] && t[i+j] != '?') {
					ok = 0;
				} else {
					t[i+j] = need[j];
				}
			}
			if(!ok) continue;
			for(int j=0; j<n; j++)
				if(t[j] == '?')
					t[j] = 'z';
			for(int j=0; j<=n-7; j++)
				if(j!=i && t.substr(j, 7)==need)
					ok = 0;
			if(ok) {
				ans = t;
				break;
			}
		}
		if(ans.empty()) {
			cout << "No\n";
		} else {
			cout << "Yes\n";
			cout << ans << '\n';
		}
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<ll, ll> P;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5+5;
 
 
int t;
 
void slove () {
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (n&1) {
		for (int i=0; i<n; i+=2) {
			if ((s[i] - '0') % 2 == 1) {
				cout << "1\n";
				return;
			}
		}
		cout << "2\n";
	} else {
		for (int i=1; i<n; i+=2) {
			if ((s[i] - '0') % 2 == 0) {
				cout << "2\n";
				return;
			}
		}
		cout << "1\n";
	}
}
 
int main() {
	IO;
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

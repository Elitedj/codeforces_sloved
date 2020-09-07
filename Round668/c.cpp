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
const int maxn = 2e5+5;
 
 
int t;
 
void slove() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	for (int i=0; i<k; i++) {
		char ch = '@';
		for (int j=i; j<n; j+=k) {
			if (s[j] != '?') {
				if (ch == '@') {
					ch = s[j];
				} else if (s[j] != ch) {
					cout << "NO\n";
					return;
				}
			}
		}
		if (ch == '@') continue;
		for (int j=i; j<n; j+=k)
			s[j] = ch;
	}
	int zero = 0, one = 0;
	for (int i=0; i<n; i++) {
		if (s[i] == '0') zero++;
		else if (s[i] == '1') one++;
	}	
	if (zero == 0 && one == 0) {
		cout << "YES\n";
		return;
	}
	zero = 0, one = 0;
	for (int i=0; i<k; i++) {
		if (s[i] == '0') zero++;
		else if (s[i] == '1') one++;
	}
	if (zero > k/2 || one > k/2) {
		cout << "NO\n";
		return;
	}
	for (int i=k; i<n; i++) {
		if (s[i-k] == '0') zero--;
		else if(s[i-k] == '1') one--;
		if (s[i] == '0') zero++;
		else if (s[i] == '1') one++;
		if (zero > k/2 || one > k/2) {
			cout << "NO\n";
			return;
		}
		if (s[i-k] != '?' && s[i] != '?' && s[i-k] != s[i]) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

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
 
int a[maxn], ans[maxn];
char op[maxn];
stack<int> sta;
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=(n<<1); i++) {
		cin >> op[i];
		if (op[i] == '-') cin >> a[i];
	}
	for (int i=(n<<1); i; i--) {
		if (op[i] == '-') {
			if (!sta.empty() && sta.top() < a[i]) {
				cout << "NO\n";
				return;
			} else {
				sta.push(a[i]);
			}
		} else {
			if (sta.empty()) {
				cout << "NO\n";
				return;
			} else {
				ans[i] = sta.top();
				sta.pop();
			}
		}
	} 
	cout << "YES\n";
	for (int i=1; i<=(n<<1); i++)
		if (op[i] == '+')
			cout << ans[i] << ' ';
	cout << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	// cin >> t;
	while (t--) slove();
	return 0;
}

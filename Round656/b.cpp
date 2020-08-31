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
 
 
int a[500];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for(int i=1; i<=2*n; i++) cin >> a[i];
		map<int, int> vis;
		vector<int> ans;
		for(int i=1; i<=2*n; i++) {
			if(vis[a[i]] == 0) {
				ans.push_back(a[i]);
				vis[a[i]] = 1;
			}
		}
		for(int v:ans) cout << v << ' ';
		cout << '\n';
	}
	return 0;
}

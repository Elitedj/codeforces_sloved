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
 
int mx[105][2][2];
void slove() {
	int n, m;
	cin >> n >> m;
	for (int i=1; i<=n; i++) {
		for (int j=0; j<2; j++)
			for (int k=0; k<2; k++)
				cin >> mx[i][j][k];
	}
	if (m&1) {
		cout << "NO\n";
		return;
	}
	for (int i=1; i<=n; i++) {
		set<int> s;
		for (int j=0; j<2; j++)
			for (int k=0; k<2; k++)
				s.insert(mx[i][j][k]);
		if (s.size() == 1) {
			cout << "YES\n";
			return ;
		}
	}
	int l = 0, r = 0;
	for (int i=1; i<=n; i++) {
		if (mx[i][0][1] == mx[i][1][0]) l = 1;
		if (mx[i][1][0] == mx[i][0][1]) r = 1;
	}
	if (l && r) cout << "YES\n";
	else cout << "NO\n";
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

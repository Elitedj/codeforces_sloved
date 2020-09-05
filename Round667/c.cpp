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
	int n, x, y;
	cin >> n >> x >> y;
	if (n == 2) {
		cout << x << ' ' << y << '\n';
		return;
	}
	vector<int> ans;
	if (n-2 >= y - x - 1) {
		for (int i=x; i<=y; i++) {
			n--;
			ans.push_back(i);
		}
		x--;
		while (n>0 && x>0) {
			n--;
			ans.push_back(x);
			x--;
		}
		y++;
		while (n>0) {
			ans.push_back(y);
			y++;
			n--;
		}
		sort(ans.begin(), ans.end());
		for (auto v:ans) cout << v << ' ';
		cout << '\n';
	} else {
		int kong = 1;
		while (1) {
			int sum = 0;
			int i;
			for (i=x; i<=y; i+=kong) {
				sum++;
			}
			if (i - y == kong && sum <= n) {
				break;
			}
			kong++;
		}
		for (int i=x; i<=y; i+=kong) {
			ans.push_back(i);
			n--;
		}
		x -= kong;
		while (n>0 && x>0) {
			ans.push_back(x);
			n--;
			x -= kong;
		}
		y += kong;
		while(n>0) {
			ans.push_back(y);
			y += kong;
			n--;
		}
		sort(ans.begin(), ans.end());
		for (auto v:ans) cout << v << ' ';
		cout << '\n';
	}
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

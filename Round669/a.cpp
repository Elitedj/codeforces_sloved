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
const int maxn = 1e6+5;
 
 
int t;
 
int a[maxn];
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	int one = 0, zero = 0;
	for (int i=1; i<=n; i++) {
		if (a[i] == 0) zero++;
		else one++;
	}
	if (one == zero) {
		cout << n / 2 << '\n';
		for (int i=1; i<=n/2; i++) cout << "0 ";
		cout << '\n';
		return;
	} else {
		char ch = (one > zero ? '1' : '0');
		int cnt = max(one, zero);
		if (cnt & 1) cnt--;
		cout << cnt << '\n';
		for (int i=1; i<=cnt; i++) cout << ch << ' ';
		cout << '\n';
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

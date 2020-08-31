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
 
 
int n, t;
ll a[maxn];
void slove() {
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	if (n == 1) {
		cout << "1 1\n";
		cout << -1*a[1] << '\n';
		for(int i=1;i<=2;i++) {
			cout << "1 1\n";
			cout << "0\n";
		}
		return;
	}
	cout << "1 1\n";
	if (a[1] > n) {
		cout << -1*(a[1] - n) << '\n';
		a[1] = n;
	} else {
		cout << n - a[1] << '\n';
		a[1] = n;
	}
	cout << "2 " << n << '\n';
	for (int i=2; i<=n; i++) {
		cout << a[i] * (n-1) << " ";
		a[i] = a[i] * n;
	}
	cout << '\n';
	cout << "1 " << n << "\n";
	for (int i=1; i<=n; i++) cout << -1*a[i] << " ";
	cout << '\n';
}
 
int main() {
	t = 1;
	//cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

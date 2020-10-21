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
const int maxn = 3e5 + 5;
 
int t;
 
ll a[50];
 
void slove() {
	int n;
	cin >> n;
	ll ans = 1, sum = 1;
	for (int i=n, j=1; j<=n/2; i--, j++) ans *= i;
	for (int i=1; i<=n/2; i++) sum *= i;
	ans = ans / 2 / sum;
	sum = sum / (n / 2);
	ans *= sum * sum;
	cout << ans << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	// cin >> t;
	while (t--) slove();
	return 0;
}

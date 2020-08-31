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
int a[500];
bool cmp(int a, int b) {
	return a > b;
}
void slove() {
	cin >> n;
	for(int i=1; i<=n; i++) cin >> a[i];
	sort(a+1, a+n+1, cmp);
	while (a[1] && a[2]) {
		a[1]--;
		a[2]--;
		sort(a+1, a+n+1, cmp);
	}
	if (a[1]) cout << "T\n";
	else cout << "HL\n";
}
 
int main() {
	//t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

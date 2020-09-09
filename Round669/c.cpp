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
 
 
int ask(int x, int y) {
	cout << "? " << x << ' ' << y << '\n';
	cout.flush();
	cin >> x;
	return x;
}
int main() {
	int n;
	cin >> n;
	vector<int> p(n+1);
	int maxx = 1;
	for (int i=2; i<=n; i++) {
		int x = ask(i, maxx);
		int y = ask(maxx, i);
		if (x < y) {
			p[maxx] = y;
			maxx = i;
		} else {
			p[i] = x;
		}
	}
	p[maxx] = n;
	cout << "!";
	for (int i=1; i<=n; i++) cout << ' ' << p[i];
	cout << '\n';
	cout.flush();
	return 0;
}

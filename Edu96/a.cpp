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
 
void slove() {
	int n;
	cin >> n;
	for (int i=0; ; i++) {
		if (i * 3 > n) break;
		for (int j=0; ; j++) {
			if (i * 3 + j * 5 > n) break;
			for (int k=0; ; k++) {
				if (i * 3 + j * 5 + k * 7 > n) break;
				if (i * 3 + j * 5 + k * 7 == n) {
					cout << i << ' ' << j <<' ' << k << '\n';
					return; 
				}
			}
		}
	}
	cout << "-1\n";
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	// freopen("myout.txt", "w", stdout);
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<ll, ll> P;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5+5;
 
 
int t;
 
int a[maxn];
void slove() {
	int n, x;
	cin >> n >> x;
	for (int i=1; i<=n; i++) cin >> a[i];
	int cntx = 0;
	vector<int> diff;
	for (int i=1; i<=n; i++) {
		if (a[i] != x) diff.push_back(a[i]);
		else cntx++;
	}
	if (cntx == n) {
		cout << "0\n";
		return;
	}
	int sum = 0, diffsum = 0;
	for (auto v:diff) {
		sum += x - v;
		diffsum += v;
	}
	if (sum == 0 || cntx>0) {
		cout << "1\n";
		return;
	}	
	cout << "2\n";
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

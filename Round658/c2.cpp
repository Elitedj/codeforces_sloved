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
 
 
int n, m, t;
 
void slove() {
	int n;
	string a, b;
	cin >> n;
	cin >> a >> b;
	a += '0';
	b += '0';
	vector<int> v1, v2;
	for (int i=1; i<=n; i++)
		if (a[i] != a[i-1])
			v1.push_back(i);
	for (int i=1; i<=n; i++)
		if (b[i] != b[i-1])
			v2.push_back(i);
	reverse(v2.begin(), v2.end());
	cout << v1.size() + v2.size();
	for (int v:v1) cout << ' ' << v;
	for (int v:v2) cout << ' ' << v;
	cout << '\n';
}
 
int main() {
	//t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

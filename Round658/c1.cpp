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
	cin >> n;
	string a, b;
	cin >> a >> b;
	vector<int> ans;
	for (int i=n-1; i>=0; i--) {
		if (a[i] == b[i]) continue;
		if (a[0] == b[i]) {
			ans.push_back(1);
			a[0] = a[0]=='0' ? '1' : '0';
		}
		ans.push_back(i+1);
		for (int j=0; j<=i; j++)
			a[j] = a[j]=='0' ? '1' : '0';
		string tmp = "";
		for (int j=i; j>=0; j--) tmp += a[j];
		a = tmp + a.substr(i+1);
	}
	cout << ans.size();
	for (int v:ans) cout << ' ' << v;
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

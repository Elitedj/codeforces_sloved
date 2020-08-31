#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e6+5;
 
 
string s;
int fun(int l, int r, char c) {
	if(l == r) {
		if(s[l] == c) return 0;
		else return 1;
	}
	int mid = (l+r)>>1;
	int prec, sufc;
	prec = fun(mid+1, r, c+1);
	sufc = fun(l, mid, c+1);
	for(int i=l; i<=mid; i++)
		if(s[i] != c) prec++;
	for(int i=mid+1; i<=r; i++)
		if(s[i] != c) sufc++;
	return min(prec, sufc);
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cin >> s;
		s = '@' + s;
		cout << fun(1, n, 'a') << '\n';
	}
	return 0;
}

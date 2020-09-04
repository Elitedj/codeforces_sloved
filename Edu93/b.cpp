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
const int maxn = 1e5+5;
 
int t;
 
void slove() {
	string s;
	cin >> s;
	vector<int> ones;
	int sz = s.length();
	for (int i=0; i<sz; i++) {
		if (s[i] == '0') continue;
		int j = i;
		while (j+1<sz && s[j+1]=='1') j++;
		ones.push_back(j-i+1);
		i = j;
	}
	sort(ones.begin(), ones.end());
	reverse(ones.begin(), ones.end());
	int ans = 0;
	for (int i=0; i<ones.size(); i+=2) ans += ones[i];
	cout << ans << '\n';
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

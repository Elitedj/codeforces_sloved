#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 1e9 + 7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e5 + 5;
 
string get_ans(vector<int>& idx, string& a) {
	string ans = "";
	if (idx.size() > 10) {
		for (int i=1; i<=5; i++) ans += a[idx[idx.size() - i]];
		ans += "...";
		ans += a[idx[1]];
		ans += a[idx[0]];
	} else {
		for (int i=idx.size() - 1; i>=0; i--) ans += a[idx[i]];
	}
	return ans;
}
 
int len[maxn];
string ans[maxn];
 
int main() {
	// freopen("in.txt", "r", stdin);
	// freopen("myout.txt", "w", stdout);
	IO;
	string s;
	cin >> s;
	int n = s.size();
	vector<int> st;
	vector<int> notme;
	for (int i=n-1; i>=0; i--) {
		if (st.size() == 0) {
			st.push_back(i);
			notme.push_back(-1);
		} else {
			if (st.back() == i + 1 && s[i] == s[i + 1]) {
				int xx = notme.back();
				if (xx != -1 && s[xx] > s[i]) {
					st.push_back(i);
					notme.push_back(xx);
				} else {
					st.pop_back();
					notme.pop_back();
				}
			} else {
				int xx = -1;
				if (s[st.back()] == s[i]) xx = notme.back();
				else xx = st.back();
				st.push_back(i);
				notme.push_back(xx);
			}
		}
		len[i] = st.size();
		ans[i] = get_ans(st, s);
	}
	for (int i=0; i<n; i++)
		cout << len[i] << ' ' << ans[i] << '\n';
	return 0;
}

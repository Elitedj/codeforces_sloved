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
	string s;
	cin >> s;
	n = s.length();
	int ans = 0;
	vector<int> cnt(10);
	for (int i=0; i<n; i++)
		cnt[s[i] - '0']++;
	for (int i=0; i<10; i++)
		ans = max(ans, cnt[i]);
	for (int i='0'; i<='9'; i++) {
		if (cnt[i-'0'] == 0) continue;
		for (int j='0'; j<='9'; j++) {
			if (i == j || cnt[j-'0']==0) continue;
			int sum = 0;
			int idx = 0;
			while (s[idx]!=i) idx++;
			for (int k=idx; k<n; k++) {
				int tar = k;
				while (s[tar]!=j && tar+1<n) tar++;
				if (s[tar] == j) {
					sum += 2;
					k = tar;
					while (s[k]!=i && k+1<n) k++;
					if (s[k] == i) k--;
				} else {
					k = n;
				}
			}
			ans = max(ans, sum);
		}
	}
	cout << n - ans << '\n';
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}
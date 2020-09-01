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
	cin >> n;
	int k, l;
	cin >> k >> l;
	vector<int> dep(n+1), q;
	q.push_back(0);
	for (int i=1; i<=n; i++) {
		cin >> dep[i];
		if (dep[i] + k <= l) q.push_back(i);
	}
	int ok = 1;
	q.push_back(n+1);
	for (int i=1; i<(int)q.size(); i++) {
		int tide = k;
		bool down = true;
		for (int j=q[i-1]+1; j<q[i]; j++) {
			tide += down ? -1 : 1;
			if (down) tide -= max(0, dep[j]+tide-l);
			if (tide<0 || dep[j]+tide>l) {
				ok = 0;
				break;
			}
			if (tide == 0) down = false;
		}
		if (!ok) break;
	}
	if (ok) cout << "Yes\n";
	else cout << "No\n";
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

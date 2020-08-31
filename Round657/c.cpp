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
bool cmp(P a, P b) {
	return a.second < b.second;
}
void slove() {
	cin >> n >> m;
	vector<P> v(m);
	for (int i=0; i<m; i++) cin >> v[i].first >> v[i].second;
	sort(v.begin(), v.end(), cmp);
	ll sum = 0, ans = 0;
	priority_queue<ll, vector<ll>, greater<ll> > pq;
	for (int i=0; i<m; i++) {
		while (((int)(pq.size())>=n) || ((int)(pq.size())&&(pq.top()<v[i].second))) {
			sum -= pq.top();
			pq.pop();
		}
		ans = max(ans, v[i].first+sum+1ll*(n-1-(int)(pq.size()))*v[i].second);
		sum += v[i].first;
		pq.push(v[i].first);
	}
	cout << ans << '\n';
}
 
int main() {
	//t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

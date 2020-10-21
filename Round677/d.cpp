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
const int maxn = 3e5 + 5;
 
int t;
 
struct node {
	int val, id;
	node () {}
	node (int val, int id) : val(val), id(id) {}
};
 
bool cmp(node a, node b) {
	return a.val == b.val ? a.id < b.id : a.val < b.val;
}
 
vector<int> pos[5005];
 
bool cmp2(vector<int> a, vector<int> b) {
	return a.size() < b.size();
}
 
void slove() {
	int n;
	cin >> n;
	vector<node> a;
	for (int i=1; i<=n; i++) {
		int x;
		cin >> x;
		a.push_back(node(x, i));
	}
	sort(a.begin(), a.end(), cmp);
	if (a[0].val == a[n-1].val) {
		cout << "NO\n";
		return;
	}
	int tot = 0;
	for (int i=1; i<=n; i++) pos[i].clear();
	int last = -1;
	for (auto v:a) {
		if (v.val == last) {
			pos[tot].push_back(v.id);
		} else {
			tot++;
			last = v.val;
			pos[tot].push_back(v.id);
		}
	}
	sort(pos + 1, pos + tot + 1, cmp2);
	cout << "YES\n";
	int rt = pos[1].back();
	pos[1].pop_back();
	for (int i=tot; i>=2; i--) {
		int newrt = pos[i].back();
		for (auto v:pos[i]) {
			cout << rt << ' ' << v << '\n';
		}
		rt = newrt;
	}
	for (auto v:pos[1]) cout << rt << ' ' << v << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	cin >> t;
	while (t--) slove();
	return 0;
}

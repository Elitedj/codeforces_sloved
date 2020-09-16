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
 
int a[maxn], l[maxn];
void slove() {
	int n;
	cin >> n;
	for (int i=1; i<=n; i++) cin >> a[i];
	for (int i=1; i<=n; i++) cin >> l[i];
	vector<int> nums;
	for (int i=1; i<=n; i++) {
		if (!l[i])
			nums.push_back(a[i]);
	}
	sort(nums.begin(), nums.end());
	reverse(nums.begin(), nums.end());
	int p = 0;
	for (int i=1; i<=n; i++) {
		if (!l[i]) {
			a[i] = nums[p];
			p++;
		}
	}
	for (int i=1; i<=n; i++) cout << a[i] << ' ';
	cout << '\n';
}
 
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
	return 0;
}

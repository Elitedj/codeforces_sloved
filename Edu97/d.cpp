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
const int maxn = 2e5 + 5;
 
int t;
int a[maxn];
 
int h, son, sum;
void init() {
	h = sum = 0;
	son = 1;
}
 
void push(int x) {
	if (sum == 0) {
		sum = son;
		son = 0;
		h++;
	}
	sum--;
	son += x;
}
 
void slove() {
	int n;
	cin >> n;
	init();
	for (int i=1; i<=n; i++) cin >> a[i];
	int l = 2;
	for (int i=2; i<=n; i++) {
		if (a[i - 1] > a[i]) {
			push(i - l);
			l = i;
		}
	}
	push(n - l);
	cout << h << '\n';
}
 
int main() {
	// freopen("in.txt", "r", stdin);
	IO;
	t = 1;
	cin >> t;
	while (t--) slove();
	return 0;
}

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
 
 
 
int a[500];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string a="", b="";
		for(int i=1; i<=50; i++) a += 'a';
		cout << a << '\n';
		while (n--) {
			int x;
			cin >> x;
			b = "";
			for (int i=0; i<x; i++) b += a[i];
			for (int i=x; i<50; i++) {
				if (a[i] == 'a') b += 'b';
				else b += 'a';
			}
			cout << b << '\n';
			swap(a, b);
		}
	}
	return 0;
}

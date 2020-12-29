#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout << "--->" << (x) << '\n';
const double eps = 1e-9;
const double PI = acos(-1);
const ll mod = 1e9 + 7;
const int maxn = 2e5 + 5;
 
int T;
 
int n;
int a[maxn];
int fun() {
    int res = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i];
        res = max(res, sum);
    }
    return res;
}
 
void slove() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int sum1 = fun();
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int sum2 = fun();
    cout << max(0, sum1 + sum2) << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

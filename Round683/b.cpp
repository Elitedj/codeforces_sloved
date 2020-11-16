#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e6 + 5;
 
int t;
 
int f[15][15];
void slove() {
    int n, m;
    cin >> n >> m;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            cin >> f[i][j];
    int sum = 0, cnt = 0, mi = inf;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if (f[i][j] < 0) {
                cnt++;
                f[i][j] *= -1;
            }
            sum += f[i][j];
            mi = min(mi, f[i][j]);
        }
    }
    if (cnt & 1) sum -= 2 * mi;
    cout << sum << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

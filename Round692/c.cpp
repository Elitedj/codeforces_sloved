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
 
// for each point (x, y) correspond to an edge <x, y>
// we want to turn all the edges to <i, i>
// for each cycle we can make one operation to turn to a path
// so the ans is m minus sum of <i, i> and add the number of cycles
int vis[maxn], to[maxn];
void slove() {
    int n, m;
    cin >> n >> m;
    int ans = m;
    for (int i = 1; i <= n; i++) {
        vis[i] = 0;
        to[i] = 0;
    }
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        if (x == y) {
            ans--;
            continue;
        }
        to[x] =  y;
    }
    for (int i = 1; i <= n; i++) {
        if (vis[i] || !to[i]) continue;
        int nxt = to[i];
        vis[i] = 1;
        while (!(nxt == 0 || nxt == i || vis[nxt])) {
            vis[nxt] = 1;
            nxt = to[nxt];
        }
        if (nxt == i) ans++;
    }
    cout << ans << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

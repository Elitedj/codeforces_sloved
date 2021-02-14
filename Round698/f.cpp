#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout << "--->" << (x) << '\n';
const double eps = 1e-9;
const double PI = acos(-1);
const ll mod = 1e9 + 7;
const int maxn = 2e5 + 5;
 
int T;
struct point {
    int x, y;
}P[maxn];
ll dis(int i, int j) {
    return 1ll * (P[i].x - P[j].x) * (P[i].x - P[j].x) + 1ll * (P[i].y - P[j].y) * (P[i].y - P[j].y);
}
void slove() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> P[i].x >> P[i].y;
    vector<int> vis(n + 1, 0);
    int idx = 0;
    P[0].x = -1e9 - 7, P[0].y = -1e9 - 7;
    for (int i = 1; i <= n; i++) {
        ll mxdis = 0;
        int tmpidx = -1;
        for (int j = 1; j <= n; j++) {
            if (vis[j]) continue;
            ll tmpdis = dis(idx, j);
            if (tmpdis > mxdis) mxdis = tmpdis, tmpidx = j;
        }
        idx = tmpidx;
        vis[idx] = 1;
        cout << idx << ' ';
    }
    cout << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    // cin >> T;
    while (T--) slove();
    return 0;
}

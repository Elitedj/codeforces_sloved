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
 
int t;
 
char g[505][505];
int cnt[505][505];
void slove() {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> g[i][j];
            if (g[i][j] == '.') cnt[i][j] = 0;
            else cnt[i][j] = 1;
        }
    }
    while (1) {
        // DEBUG(111);
        int ok = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (g[i][j] == '.') continue;
                if (i - 1 >= 1 && j - 1 >= 1 && j + 1 <= m) {
                    int tmp = min(cnt[i - 1][j], min(cnt[i][j - 1], cnt[i][j + 1])) + 1;
                    if (tmp > cnt[i][j]) {
                        ok = 1;
                        cnt[i][j] = tmp;
                    }
                }
            }
        }
        if (!ok) break;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            ans += cnt[i][j];
        }
    }
    cout << ans << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

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
const int maxn = 3e5 + 5;
 
int T;
 
ll a[5005], cnt[5005];
ll dp[5005][5005];
// dp[i][j] is the number of paths that robot in the cell i after move j steps
// and also dp[i][j] is the number of paths that robot in the any cells after move j steps when robot in the cell i
// so the number of the good paths include the cell i is the sum of (dp[i][j] * dp[i][k - j]) when (0 <= j <= k)
void slove() {
    int n, k, q;
    cin >> n >> k >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        dp[i][0] = 1;
    }
    for (int j = 1; j <= k; j++) {
        for (int i = 1; i <= n; i++) {
            dp[i][j] = (dp[i - 1][j - 1] + dp[i + 1][j - 1]) % mod;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            cnt[i] = (cnt[i] + dp[i][j] * dp[i][k - j] % mod) % mod;
        }
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = (ans + a[i] * cnt[i] % mod) % mod;
    }
    while (q--) {
        ll pos, x;
        cin >> pos >> x;
        ans = (ans - (a[pos] * cnt[pos]) % mod + mod) % mod;
        a[pos] = x;
        ans = (ans + a[pos] * cnt[pos] % mod) % mod;
        cout << ans << '\n';
    }
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    // cin >> T;
    while (T--) slove();
    return 0;
}

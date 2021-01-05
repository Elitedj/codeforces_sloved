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
const int maxn = 5e5 + 5;
 
int T;
 
ll a[maxn];
void slove() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    ll ans = 0;
    vector<ll> dp(n + 5, 0);
    for (int i = 1; i <= n; i++) {
        dp[i] += a[i];
        if (i + a[i] <= n) dp[i + a[i]] = max(dp[i + a[i]], dp[i]);
        ans = max(ans, dp[i]);
    }
    cout << ans << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

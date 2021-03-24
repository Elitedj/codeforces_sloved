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

ll b[maxn];
void slove() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> b[i];
    map<ll, ll> dp;
    ll ans = 1;
    dp[0] = 1;
    ll s = b[1];
    for (int i = 2; i <= n; i++) {
        ll tmp = ans;
        ans = ((ans * 2) % mod - dp[s] + mod) % mod;
        dp[s] = tmp;
        s += b[i];
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

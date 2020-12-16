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
 
int t;
 
ll a[maxn];
ll fac[maxn], inv[maxn];
 
ll kpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) {
            res = res * a % mod;
        }
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
 
void init(int n) {
    fac[0] = 1;
    for (int i = 1; i <= n; i++) fac[i] = fac[i - 1] * ll(i) % mod;
    inv[n] = kpow(fac[n], mod - 2);
    for (int i = n - 1; i >= 0; i--) inv[i] = inv[i + 1] * ll(i + 1) % mod;
}
 
ll C(ll n, ll m) {
	ll res = (1ll * fac[n] * inv[m]) % mod;
	return (1ll * res * inv[n - m]) % mod;
}
 
void slove() {
    ll n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    ll ans = 0;
    for (int i = n; i >= 1; i--) {
        ll pos = lower_bound(a + 1, a + i + 1, a[i] - k) - a;
        ll len = 1ll * (ll(i) - pos + 1);
        if (len >= m) {
            ans = (ans + C(ll(len - 1), ll(m - 1))) % mod;
        }
    }
    cout << ans << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    init(maxn - 10);
    while (t--) slove();
    return 0;
}

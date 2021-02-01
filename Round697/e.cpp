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

int a[maxn];
ll fac[maxn], inv[maxn];
ll kpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
void init() {
    fac[0] = inv[0] = 1;
    for (int i = 1; i <= 1000; i++) fac[i] = fac[i - 1] * i % mod;
    inv[1000] = kpow(fac[1000], mod - 2);
    for (int i = 999; i >= 0; i--) inv[i] = inv[i + 1] * (i + 1) % mod;
}
ll C(int n, int m) {
    return 1ll * fac[n] * inv[m] % mod * inv[n - m] % mod;
}
void slove() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    int hav = 0, all = 0, tar = a[n - k + 1];
    for (int i = 1; i <= n; i++) {
        if (a[i] == tar) all++;
        if (i >= n - k + 1 && a[i] == tar) hav++;
    }
    cout << C(all, hav) << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    init();
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

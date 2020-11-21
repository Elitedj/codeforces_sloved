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
const int maxn = 2e5 + 5;
 
int t;
 
ll kpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
 
void slove() {
    int n;
    cin >> n;
    ll a = 1, b = 1;
    if (n == 1) {
        cout << kpow(2, mod - 2) << '\n';
        return;
    }
    if (n == 2) {
        cout << "748683265\n";
        return;
    }
    for (int i=3; i<=n; i++) {
        ll c = (a + b) % mod;
        a = b; b = c;
    }
    ll mu = kpow(2, n);
    ll ans = (b * kpow(mu, mod - 2)) % mod;
    cout << ans << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    t = 1;
    // cin >> t;
    while (t--) slove();
    return 0;
}

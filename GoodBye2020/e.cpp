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

void slove() {
    int n;
    cin >> n;
    vector<ll> a(n, 0), cnt(100, 0), bit(100, 0);
    bit[1] = 1;
    for (int i = 2; i <= 60; i++) bit[i] = (bit[i - 1] << 1);
    for (auto &v : a) {
        cin >> v;
        for (int i = 1; i <= 60; i++) {
            if (v & bit[i]) cnt[i]++;
        }
    }
    ll ans = 0;
    for (auto v : a) {
        ll sum_or = 0, sum_and = 0;
        for (int i = 1; i <= 60; i++) {
            if (v & bit[i]) {
                sum_and = (sum_and + bit[i] % mod * cnt[i] % mod) % mod;
                sum_or = (sum_or + bit[i] % mod * n % mod) % mod;
            } else {
                sum_or = (sum_or + bit[i] % mod * cnt[i] % mod) % mod;
            }
        }
        ans = (ans + sum_and * sum_or % mod) % mod;
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

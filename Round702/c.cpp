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

ll fun(ll x) {
    ll l = 0, r = 1e6 + 5;
    while (l + 1 < r) {
        ll mid = (l + r) >> 1;
        if (mid * mid * mid <= x) l = mid;
        else r = mid;
    }
    return l;
}
void slove() {
    ll x;
    cin >> x;
    for (ll i = 1; i * i * i < x; i++) {
        ll a = x - i * i * i;
        ll b = fun(a);
        if (b * b * b == a) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

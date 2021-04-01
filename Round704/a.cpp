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
    ll p, a, b, c;
    cin >> p >> a >> b >> c;
    ll ans = INF;
    if (!(p % a) || !(p % b) || !(p % c)) cout << 0 << '\n';
    else {
        ans = min(ans, a - (p % a));
        ans = min(ans, b - (p % b));
        ans = min(ans, c - (p % c));
        cout << ans << '\n';
    }
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}
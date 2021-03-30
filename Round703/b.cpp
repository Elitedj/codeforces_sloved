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

int x[maxn], y[maxn];
void slove() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> x[i] >> y[i];
    sort(x + 1, x + n + 1);
    sort(y + 1, y + n + 1);
    if (n & 1) cout << "1\n";
    else {
        ll ans = 0;
        int m = n / 2;
        ans = 1ll * (x[m + 1] - x[m] + 1) * (y[m + 1] - y[m] + 1);
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

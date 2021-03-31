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
    int n, u, r, d, l;
    cin >> n >> u >> r >> d >> l;
    for (int m = 0; m < 16; m++) {
        int uu = u, rr = r, dd = d, ll = l;
        for (int i = 0; i < 4; i++) {
            if (m & (1 << i)) {
                if (i == 0) uu--, rr--;
                else if (i == 1) uu--, ll--;
                else if (i == 2) dd--, rr--;
                else dd--, ll--;
            }
            if (uu < 0 || dd < 0 || rr < 0 || ll < 0) continue;
            if (uu > n - 2 || rr > n - 2 || ll > n - 2 || dd > n - 2) continue;
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

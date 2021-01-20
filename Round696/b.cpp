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

int pr[maxn];

void init() {
    pr[1] = 1;
    for (int i = 2; i < maxn; i++) {
        if (pr[i]) continue;
        for (int j = (i << 1); j < maxn; j += i) pr[j] = 1;
    }
}

void slove() {
    int d;
    cin >> d;
    ll ans = 1;
    for (int i = d + 1; i; i++) {
        if (pr[i] == 0) {
            ans = 1ll * i * i * i;
            for (int j = i + d; ; j++) {
                if (pr[j] == 0) {
                    ans = min(ans, 1ll * i * j);
                    cout << ans << '\n';
                    return;
                }
            }
        }
    }
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

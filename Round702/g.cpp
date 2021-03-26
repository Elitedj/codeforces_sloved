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

ll pre[maxn], mx[maxn];
void slove() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pre[i] = pre[i - 1] + x;
        mx[i] = max(mx[i - 1], pre[i]);
    }
    while (m--) {
        int x;
        cin >> x;
        ll ans = 0;
        if (x > mx[n]) {
            if (pre[n] <= 0) {
                cout << "-1 ";
                continue;
            }
            int d = (x - mx[n] + pre[n] - 1) / pre[n];
            ans = 1ll * d * n;
            x -= 1ll * d * pre[n];
        }
        ans += lower_bound(mx + 1, mx + n + 1, x) - mx;
        cout << ans - 1 << ' ';
    }
    cout << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

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
ll a[maxn], b[maxn], c[maxn];
void slove() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> c[i];
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    ll cl = 0, ans = 0;
    for (int i = 2; i <= n; i++) {
        if (a[i] == b[i]) {
            cl = 2;
        } else {
            if (cl == 0) cl = abs(a[i] - b[i]) + 2;
            else cl = max(cl + 2 + c[i - 1] - 1 - abs(a[i] - b[i]), abs(a[i] - b[i]) + 2);
        }
        ans = max(ans, cl + c[i] - 1);
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

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
void slove() {
    int n, u, v;
    cin >> n >> u >> v;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ok = 1;
    for (int i = 2; i <= n; i++) {
        if (a[i] != a[1]) ok = 0;
    }
    if (ok) {
        cout << v + min(u, v) << '\n';
        return;
    }
    ok = 1;
    for (int i = 2; i <= n; i++) {
        if (abs(a[i] - a[i - 1]) > 1) ok = 0;
    }
    if (ok) {
        cout << min(u, v) << '\n';
        return;
    }
    cout << 0 << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

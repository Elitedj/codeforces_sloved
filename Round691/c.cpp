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
 
ll a[maxn], b[maxn];
 
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
 
void slove() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    if (n == 1) {
        for (int i = 1; i <= m; i++) cout << a[1] + b[i] << ' ';
        cout << '\n';
        return;
    }
    sort(a + 1, a + n + 1);
    int ok = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] + 1 == a[i + 1]) {
            ok = 1;
            break;
        }
    }
    if (ok) {
        for (int i = 1; i <= m; i++) cout << "1 ";
        cout << '\n';
        return;
    }
 
    ll adj_g = a[2] - a[1];
    for (int i = 3; i <= n; i++) {
        adj_g = gcd(adj_g, a[i] - a[i - 1]);
    }
 
    for (int i = 1; i <= m; i++) {
        cout << gcd(adj_g, a[1] + b[i]) << ' ';
    }
 
    // for (int i = 1; i <= m; i++) {
    //     ll g = gcd(a[1] + b[i], a[2] + b[i]);
    //     for (int j = 3; j <= n; j++) g = gcd(g, a[j] + b[i]);
    //     cout << g << ' ';
    // }
    cout << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    // cin >> T;
    while (T--) slove();
    return 0;
}

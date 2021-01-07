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
const int maxn = 3e5 + 5;
 
int T;
 
int a[maxn], c[maxn];
 
void slove() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> c[i];
    sort(a + 1, a + n + 1);
    reverse(a + 1, a + n + 1);
    ll ans = 0;
    for (int i = 1, j = 1; i <= n; i++) {
        if (j <= m && a[i] >= j) ans += c[j++];
        else ans += c[a[i]];
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

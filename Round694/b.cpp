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
 
int a[maxn], cnt[maxn];
void slove() {
    int n, x;
    cin >> n >> x;
    ll ans = 0;
    int mi = inf, idx = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        cnt[i] = 0;
        int tmp = a[i];
        while (a[i] % x == 0) {
            cnt[i]++;
            a[i] /= x;
        }
        a[i] = tmp;
        if (cnt[i] < mi) mi = cnt[i], idx = i;
    }
    for (int i = 1; i <= n; i++) ans += 1ll * (mi + 1) * a[i];
    for (int i = 1; i <= idx - 1; i++) ans += 1ll * a[i];
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

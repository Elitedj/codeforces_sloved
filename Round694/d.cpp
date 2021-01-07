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
 
ll a[maxn], b[maxn];
ll prim[maxn], tot;
int isnprim[maxn];
 
void init() {
    tot = 0, isnprim[0] = isnprim[1] = 1;
    for (int i = 2; i < maxn; i++) {
        if (!isnprim[i]) prim[tot++] = i;
        for (int j = 0; j < tot && i * prim[j] < maxn; j++) {
            isnprim[i * prim[j]] = 1;
            if (i % prim[j] == 0) break;
        }
    }
}
 
void slove() {
    map<ll, int> mp;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        b[i] = 1;
        for (int j = 0; j < tot && prim[j] * prim[j] <= a[i]; j++) {
            if (a[i] % prim[j] == 0) {
                int cnt = 0;
                while (a[i] % prim[j] == 0) {
                    a[i] /= prim[j];
                    cnt++;
                }
                if (cnt & 1) b[i] *= prim[j];
            }
        }
        if (a[i] > 1) b[i] *= a[i];
        mp[b[i]]++;
    }
    int ans1 = 0;
    for (auto v : mp) ans1 = max(ans1, v.second);
    for (int i = 1; i <= n; i++) {
        a[i] = (mp[b[i]] & 1) ? b[i] : 1ll;
    }
    mp.clear();
    for (int i = 1; i <= n; i++) mp[a[i]]++;
    int ans2 = 0;
    for (auto v : mp) ans2 = max(ans2, v.second);
    int q;
    cin >> q;
    while (q--) {
        ll w;
        cin >> w;
        if (w == 0) cout << ans1 << '\n';
        else cout << ans2 << '\n';
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

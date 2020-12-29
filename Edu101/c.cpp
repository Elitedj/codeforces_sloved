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
 
int h[maxn];
void slove() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> h[i];
    int l, r, ok = 1;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            l = h[i], r = h[i];
        } else {
            int nl = l - (k - 1), nr = r + (k - 1);
            if (nl < h[i]) nl = h[i];
            if (nr > h[i] + (k - 1)) nr = h[i] + (k - 1);
            if (nl > nr) ok = 0;
            l = nl, r = nr;
        }
        if (i == n && l != h[i]) ok = 0;
    }
    if (ok) cout << "YES\n";
    else cout << "NO\n";
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

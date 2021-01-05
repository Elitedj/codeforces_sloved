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
const int maxn = 5e5 + 5;
 
int T;
 
void slove() {
    int w, h, n;
    cin >> w >> h >> n;
    int cntw = 1, cnth = 1;
    while (w && w % 2 == 0) {
        w /= 2;
        cntw *= 2;
    }
    while (h && h % 2 == 0) {
        h /= 2;
        cnth *= 2;
    }
    if (1ll * cnth * cntw >= n) cout << "YES\n";
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

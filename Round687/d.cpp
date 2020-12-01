#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 1e9 + 7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5 + 5;
 
int t;
 
int a[maxn];
void slove() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 2; i < n; i++) {
        if (a[i - 1] > (a[i] ^ a[i + 1])) {
            cout << "1\n";
            return;
        }
    }
    int ans = inf;
    for (int i = 1; i < n; i++) {
        int lsum = 0;
        for (int j = i; j >= 1; j--) {
            lsum ^= a[j];
            int rsum = 0;
            for (int r = i + 1; r <= n; r++) {
                rsum ^= a[r];
                if (lsum > rsum) {
                    ans = min(ans, r - (i + 1) + (i - j));
                }
            }
        }
    }
    if (ans == inf) ans = -1;
    cout << ans << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    // cin >> t;
    while (t--) slove();
    return 0;
}

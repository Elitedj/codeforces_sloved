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
 
int t;
 
int a[maxn];
int pre[maxn];
void slove() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) pre[i] = pre[i - 1] + a[i];
    int sum = pre[n];
    int ans = n - 1;
    for (int i = 1; i <= n; i++) {
        if (sum % i != 0) continue;
        int tar = sum / i;
        int ok = 1;
        int tmp = 0;
        for (int j = 1; j <= n; j++) {
            tmp += a[j];
            if (tmp > tar) {
                ok = 0;
                break;
            } else if (tmp == tar) tmp = 0;
        }
        if (tmp != 0) ok = 0;
        if (ok) {
            ans = min(ans, n - i);
        }
    }
    cout << ans << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

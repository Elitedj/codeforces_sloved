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
 
ll a[maxn];
void slove() {
    int n;
    cin >> n;
    int ok = 1;
    for (int i = 1; i <= 2 * n; i++) {
        cin >> a[i];
        if (a[i] & 1) ok = 0;
    }
    if (!ok) {
        cout << "NO\n";
        return;
    }
    sort(a + 1, a + 2 * n + 1);
    reverse(a + 1, a + 2 * n + 1);
    if (a[1] % (2 * n)) {
        cout << "NO\n";
        return;
    }
    ll tmp = a[1] / (2 * n);
    for (int i = 1; i <= 2 * n - 3; i += 2) {
        if (a[i] == a[i + 2] || (a[i] - a[i + 2]) % (2 * (n - (i + 1) / 2)) || tmp <= 0 || a[i] != a[i + 1]) {
            cout << "NO\n";
            return ;
        }
        tmp -= (a[i] - a[i + 2]) / (2 * (n - (i + 1) / 2));
    }
    if (a[2 * n - 1] != a[2 * n] || tmp <= 0) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

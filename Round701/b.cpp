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
    int n, q, k;
    cin >> n >> q >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l] + k + 1 - 2 * (r - l + 1) << '\n';
    }
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    // cin >> T;
    while (T--) slove();
    return 0;
}

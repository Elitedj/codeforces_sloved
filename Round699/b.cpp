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

void slove() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n + 1);
    for (int i = 1; i <= n; i++) cin >> h[i];
    int ans = -1;
    while (k) {
        int idx = -1;
        for (int i = 2; i <= n; i++) {
            if (h[i] > h[i - 1]) {
                idx = i;
                break;
            }
        }
        // DEBUG(idx);
        if (idx == -1) break;
        int i = idx - 1;
        k--;
        h[i]++;
        ans = i;
    }
    if (k) ans = -1;
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

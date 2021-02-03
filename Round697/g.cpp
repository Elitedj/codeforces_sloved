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
    int n;
    cin >> n;
    vector<int> cnt(maxn, 0), dp(maxn, 0);
    int ans = 0, mx = -1;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
        mx = max(mx, x);
    }
    for (int i = 1; i <= mx; i++) {
        dp[i] += cnt[i];
        ans = max(ans, dp[i]);
        for (int j = 2 * i; j <= mx; j += i) dp[j] = max(dp[j], dp[i]);
    }
    cout << n - ans << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

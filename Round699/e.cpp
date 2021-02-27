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

int a[maxn], L[maxn], R[maxn], cnt[maxn], dp[maxn];
void slove() {
    int n;
    cin >> n;
    memset(L, inf, sizeof(L));
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        L[a[i]] = min(L[a[i]], i);
        R[a[i]] = max(R[a[i]], i);
    }
    for (int i = n; i > 0; i--) {
        cnt[a[i]]++;
        dp[i] = max(dp[i + 1], cnt[a[i]]);
        if (i == L[a[i]])
            dp[i] = max(dp[i], dp[R[a[i]] + 1] + cnt[a[i]]);
    }
    cout << n - dp[1] << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    // cin >> T;
    while (T--) slove();
    return 0;
}

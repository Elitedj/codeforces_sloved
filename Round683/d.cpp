#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e6 + 5;
 
int t;
 
char a[maxn], b[maxn];
int dp[5005][5005];
void slove() {
    int n, m;
    scanf("%d%d", &n, &m);
    scanf("%s", a + 1);
    scanf("%s", b + 1);
    int ans = 0;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) - 1;
            if (a[i] == b[j]) {
                dp[i][j] = max(dp[i][j], max(dp[i - 1][j - 1] + 2, 2));
            }
            ans = max(ans, dp[i][j]);
        }
    }
    printf("%d\n", ans);
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    t = 1;
    // cin >> t;
    while (t--) slove();
    return 0;
}

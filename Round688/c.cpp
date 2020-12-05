#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 1e9 + 7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5 + 5;
 
int t;
 
int mp[2005][2005];
 
void slove() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char ch;
            cin >> ch;
            mp[i][j] = ch - '0';
        }
    }
    for (int d = 0; d < 10; d++) {
        int ans = 0;
        int xL = inf, xR = 0, yL = inf, yR = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (mp[i][j] == d) {
                    xL = min(xL, i);
                    xR = max(xR, i);
                    yL = min(yL, j);
                    yR = max(yR, j);
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            int tmpyL = inf, tmpyR = 0;
            for (int j = 1; j <= n; j++) {
                if (mp[i][j] == d) {
                    tmpyL = min(tmpyL, j);
                    tmpyR = max(tmpyR, j);
                    ans = max(ans, max(i - xL, xR - i) * max(n - j, j - 1));
                }
            }
            if (tmpyR) {
                ans = max(ans, (tmpyR - tmpyL) * max(n - i, i - 1));
            }
        }
        for (int i = 1; i <= n; i++) {
            int tmpxL = inf, tmpxR = 0;
            for (int j = 1; j <= n; j++) {
                if (mp[j][i] == d) {
                    tmpxL = min(tmpxL, j);
                    tmpxR = max(tmpxR, j);
                    ans = max(ans, max(i - yL, yR - i) * max(n - j, j - 1));
                }
            }
            if (tmpxR) {
                ans = max(ans, (tmpxR - tmpxL) * max(n - i, i - 1));
            }
        }
        cout << ans << ' ';
    }
    cout << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

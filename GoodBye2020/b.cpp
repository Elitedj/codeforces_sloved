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

int a[maxn], vis[maxn];
void slove() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        vis[i] = vis[n + i] = 0;
    }
    vis[2 * n + 1] = 0;
    sort(a + 1, a + n + 1);
    for (int i = n; i >= 1; i--) {
        if (vis[a[i] + 1] == 0) vis[a[i] + 1] = 1;
        else vis[a[i]] = 1;
    }
    int ans = 0;
    for (int i = 1; i <= 2 * n + 1; i++)
        if (vis[i]) ans++;
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

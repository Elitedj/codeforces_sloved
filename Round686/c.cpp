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
 
int a[maxn];
vector<P> pos[maxn];
void slove() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    int diff = 0;
    for (int i=2; i<=n; i++) {
        if (a[i] != a[i - 1]) {
            diff = 1;
            break;
        }
    }
    if (n == 1 || !diff) {
        cout << "0\n";
        return;
    }
    for (int i=1; i<=n; i++) pos[i].clear();
    for (int i=1; i<=n; i++) {
        int j = i;
        while (j + 1 <= n && a[j + 1] == a[i]) j++;
        pos[a[i]].push_back(P(i, j));
        i = j;
    }
    int ans = inf;
    for (int i=1; i<=n; i++) {
        if (pos[i].empty()) continue;
        int tmp = (int)pos[i].size() - 1;
        if (pos[i][0].first != 1) tmp++;
        if (pos[i].back().second != n) tmp++;
        ans = min(ans, tmp);
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

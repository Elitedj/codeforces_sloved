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
    int n, m;
    cin >> n >> m;
    vector<int> vis(n + 1), cnt(n + 1), a(n + 1), b(n + 1), c(m + 1);
    vector<vector<int> > pos(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        vis[b[i]] = 1;
        if (a[i] != b[i]) cnt[b[i]]++, pos[b[i]].push_back(i);
    }
    for (int i = 1; i <= m; i++) cin >> c[i];
    vector<int> ans(m + 1);
    if (vis[c[m]] == 0) {
        cout << "NO\n";
        return;
    }
    int last_pos;
    if (cnt[c[m]]) last_pos = pos[c[m]][0];
    else {
        for (int i = 1; i <= n; i++) {
            if (b[i] == c[m]) {
                last_pos = i;
                break;
            }
        }
    }
    for (int i = 1; i <= m; i++) {
        if (cnt[c[i]]) {
            cnt[c[i]]--;
            ans[i] = pos[c[i]].back();
            pos[c[i]].pop_back();
        } else {
            ans[i] = last_pos;
        }
    }
    ans[m] = last_pos;
    for (int i = 1; i <= n; i++) {
        if (cnt[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    for (int i = 1; i <= m; i++) cout << ans[i] << ' ';
    cout << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

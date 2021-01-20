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
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n; i++) cin >> a[i];
    sort(a + 1, a + 2 * n + 1);
    for (int i = 1; i < 2 * n; i++) {
        multiset<int> s;
        for (int j = 1; j <= 2 * n; j++) s.insert(a[j]);
        int ok = 1;
        int x = a[i] + a[2 * n];
        vector<P> ans;
        for (int j = 1; j <= n; j++) {
            int mx = *prev(s.end());
            s.erase(s.find(mx));
            if (s.find(x - mx) != s.end()) {
                ans.push_back(P(x - mx, mx));
                s.erase(s.find(x - mx));
                x = mx;
            } else {
                ok = 0;
                break;
            }
        }
        if (ok) {
            cout << "YES\n";
            cout << ans[0].first + ans[0].second << '\n';
            for (auto v : ans) cout << v.first << ' ' << v.second << '\n';
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

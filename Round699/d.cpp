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

char mp[1005][1005];
void slove() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> mp[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            if (i == j) continue;
            if (mp[i][j] == mp[j][i]) {
                cout << "YES\n";
                m++;
                int be = i;
                while (m--) {
                    cout << be << ' ';
                    be ^= (i ^ j);
                }
                cout << '\n';
                return;
            }
        }
    if (m & 1) {
        cout << "YES\n";
        m++;
        int be = 1;
        while (m--) {
            cout << be << ' ';
            be ^= (1 ^ 2);
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++) {
        int d[2][2] = {0};
        for (int j = 1; j <= n; j++) {
            if (i == j) continue;
            d[0][mp[i][j] - 'a'] = j;
            d[1][mp[j][i] - 'a'] = j;
        }
        for (int j = 0; j < 2; j++) {
            if (d[0][j] && d[1][j]) {
                int x = i;
                int y = d[0][j];
                int z = d[1][j];
                vector<int> ans;
                ans.push_back(x);
                for (int k = 0; k < m / 2; k++) {
                    if (k & 1) ans.push_back(x);
                    else ans.push_back(y);
                }
                reverse(ans.begin(), ans.end());
                for (int k = 0; k < m / 2; k++) {
                    if (k & 1) ans.push_back(x);
                    else ans.push_back(z);
                }
                cout << "YES\n";
                for (auto v : ans) cout << v << ' ';
                cout << '\n';
                return;
            }
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

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
    string s;
    cin >> n >> s;
    vector<int> dl(n), dr(n);
    dl[0] = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) dl[i] = 1;
        else dl[i] = dl[i - 1] + 1;
    }
    dr[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == s[i + 1]) dr[i] = 1;
        else dr[i] = dr[i + 1] + 1;
    }
    for (int i = 0; i <= n; i++) {
        int ans = 1;
        if (i) ans += (s[i - 1] == 'L' ? dl[i - 1] : 0);
        if (i != n) ans += (s[i] == 'R' ? dr[i] : 0);
        cout << ans << ' ';
    }
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

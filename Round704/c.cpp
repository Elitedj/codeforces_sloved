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

int l[maxn], r[maxn];
void slove() {
    int slen, tlen;
    string s, t;
    cin >> slen >> tlen;
    cin >> s >> t;
    for (int i = 0, idx = 0; i < tlen; i++) {
        while (idx < slen && s[idx] != t[i]) idx++;
        l[i] = idx;
        idx++;
    }
    for (int i = tlen - 1, idx = slen - 1; i >= 0; i--) {
        while (idx >= 0 && s[idx] != t[i]) idx--;
        r[i] = idx;
        idx--;
    }
    int ans = 0;
    for (int i = 0; i < tlen - 1; i++) {
        ans = max(ans, r[i + 1] - l[i]);
    }
    cout << ans << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    // cin >> T;
    while (T--) slove();
    return 0;
}

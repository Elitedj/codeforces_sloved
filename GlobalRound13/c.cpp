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

int s[maxn], cnt[maxn];
void slove() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        cnt[i] = 0;
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i] - cnt[i] > 1) {
            ans += s[i] - cnt[i] - 1;
            cnt[i] = s[i] - 1;
        }
        for (int j = i + 2; j <= min(n, i + s[i]); j++) cnt[j]++;
        if (i + 1 <= n) {
            cnt[i + 1] += cnt[i] - s[i] + 1;
        }
    }
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

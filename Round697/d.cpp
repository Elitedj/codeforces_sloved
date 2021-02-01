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

int a[maxn], b[maxn];
void slove() {
    int n, m;
    cin >> n >> m;
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 1; i <= n; i++) cin >> b[i];
    if (sum < m) {
        cout << "-1\n";
        return;
    }
    vector<int> k1, k2;
    for (int i = 1; i <= n; i++) {
        if (b[i] == 1) k1.push_back(a[i]);
        else k2.push_back(a[i]);
    }
    sort(k1.rbegin(), k1.rend());
    sort(k2.rbegin(), k2.rend());
    int sz1 = k1.size(), sz2 = k2.size();
    sum = 0;
    int ans = inf;
    for (auto v : k2) sum += v;
    int idx = 0;
    for (int i = sz2; i >= 0; i--) {
        while (idx < sz1 && sum < m) {
            sum += k1[idx++];
        }
        if (sum >= m) {
            ans = min(ans, 2 * i + idx);
        }
        if (i > 0) sum -= k2[i - 1];
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

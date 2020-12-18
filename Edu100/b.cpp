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

int t;
int a[maxn], b[maxn];
void slove() {
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 1; i <= n; i++) {
        int be = 1;
        while (be * 2 < a[i]) be <<= 1;
        int ed = ((be << 1) > 1000000000) ? be : (be << 1);
        b[i] = abs(be - a[i]) < abs(ed - a[i]) ? be : ed;
    }
    // ll sum2 = 0;
    // for (int i = 1; i <= n; i++) sum2 += abs(a[i] - b[i]);
    // DEBUG(sum2 * 2 <= sum);
    for (int i = 1; i <= n; i++) cout << b[i] << ' ';
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

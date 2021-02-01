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
    int a, b, k;
    cin >> a >> b >> k;
    vector<P> P(k);
    map<int, int> cnta, cntb;
    for (int i = 0; i < k; i++) {
        cin >> P[i].first;
        cnta[P[i].first]++;
    }
    for (int i = 0; i < k; i++) {
        cin >> P[i].second;
        cntb[P[i].second]++;
    }
    ll ans = 0;
    for (int i = 0; i < k; i++) {
        ans += (k - 1) - (cnta[P[i].first] - 1) - (cntb[P[i].second] - 1);
    }
    cout << ans / 2 << '\n';
}


int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

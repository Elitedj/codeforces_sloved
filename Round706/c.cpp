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
    cin >> n;
    vector<double> xx, yy;
    for (int i = 1; i <= 2 * n; i++) {
        int x, y;
        cin >> x >> y;
        if (!x) yy.push_back(abs(y));
        else xx.push_back(abs(x));
    }
    sort(xx.begin(), xx.end());
    sort(yy.begin(), yy.end());
    double ans = 0.0;
    for (int i = 0; i < n; i++) {
        ans += sqrt(xx[i] * xx[i] + yy[i] * yy[i]);
    }
    printf("%.15lf\n", ans);
}

int main() {
    // freopen("in.txt", "r", stdin);
    // IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

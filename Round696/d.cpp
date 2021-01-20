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
    vector<int> a(n + 2);
    for (int i = 1; i <= n; i++) cin >> a[i];
    n += 2;
    vector<int> l(n), r(n);
    l[0] = a[0];
    for (int i = 1; i < n; i++) {
        if (l[i - 1] == -1 || l[i - 1] > a[i]) l[i] = -1;
        else l[i] = a[i] - l[i - 1];
    }
    r[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (r[i + 1] == -1 || r[i + 1] > a[i]) r[i] = -1;
        else r[i] = a[i] - r[i + 1];
    }
    for (int i = 0; i < n - 1; i++) {
        if (l[i] != -1 && r[i] != i - 1 && l[i] == r[i + 1]) {
            cout << "YES\n";
            return;
        }
    }
    for (int i = 1; i <= n - 3; i++) {
        if (l[i - 1] != -1 && r[i + 2] != -1 && l[i - 1] <= a[i + 1] && r[i + 2] <= a[i] && l[i - 1] + a[i] == a[i + 1] + r[i + 2]) {
            cout << "YES\n";
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

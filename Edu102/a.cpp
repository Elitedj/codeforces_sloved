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
const int maxn = 3e5 + 5;

int T;

int a[maxn];
void slove() {
    int n, d;
    cin >> n >> d;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int flag = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] > d) {
            flag = 1;
            break;
        }
    }
    sort(a + 1, a + n + 1);
    if (a[1] + a[2] > d && flag) cout << "NO\n";
    else cout << "YES\n";
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

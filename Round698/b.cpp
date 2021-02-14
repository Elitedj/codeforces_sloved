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
int check(int x, int d) {
    while (x) {
        if (x % 10 == d) return 1;
        x /= 10;
    }
    return 0;
}
void slove() {
    int q, d;
    cin >> q >> d;
    while (q--) {
        int x;
        cin >> x;
        if (x >= 10 * d || check(x, d)) {
            cout << "YES\n";
            continue;
        }
        x -= d;
        while (x > 0 && !(x % 10 == 0 || check(x, d))) x -= d;
        if (x < 0) cout << "NO\n";
        else cout << "YES\n";
    }
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

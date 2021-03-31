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

int a[maxn];
void slove() {
    int n, q;
    cin >> n >> q;
    int one = 0, zero = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i]) one++;
        else zero++;
    }
    while (q--) {
        int op, k;
        cin >> op >> k;
        if (op == 1) {
            if (a[k]) {
                a[k] = 0;
                one--, zero++;
            } else {
                a[k] = 1;
                one++, zero--;
            }
        } else {
            if (one >= k) cout << "1\n";
            else cout << "0\n";
        }
    }
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    // cin >> T;
    while (T--) slove();
    return 0;
}

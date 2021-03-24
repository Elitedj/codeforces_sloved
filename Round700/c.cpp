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

int val[maxn];
int ask(int idx) {
    if (val[idx] == 0) {
        cout << "? " << idx << '\n';
        cout.flush();
        cin >> val[idx];
    }
    return val[idx];
}
int main() {
    int n;
    cin >> n;
    val[0] = val[n + 1] = inf;
    int L = 1, R = n;
    while (L <= R) {
        int mid = (L + R) >> 1;
        int x = ask(mid - 1);
        int y = ask(mid);
        int z = ask(mid + 1);
        if (y < x && y < z) {
            cout << "! " << mid << '\n';
            cout.flush();
            return 0;
        } else {
            if (x < y) R = mid - 1;
            else L = mid + 1;
        }
    }
    return 0;
}

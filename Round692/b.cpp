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
    ll n;
    cin >> n;
    while (1) {
        ll tmp = n;
        vector<int> fac;
        while (tmp) {
            int x = tmp % 10;
            if (x) fac.push_back(x);
            tmp /= 10;
        }
        int ok = 1;
        for (auto v : fac) {
            if (n % v != 0) {
                ok = 0;
                break;
            }
        }
        if (ok) {
            cout << n << '\n';
            return;
        }
        n++;
    }
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

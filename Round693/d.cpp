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
const int maxn = 5e5 + 5;
 
int T;
 
ll a[maxn];
void slove() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    reverse(a + 1, a + n + 1);
    ll alice = 0, bob = 0;
    for (int i = 1; i <= n; i++) {
        if (i & 1) {
            if (a[i] % 2 == 0) alice += a[i];
        } else {
            if (a[i] & 1) bob += a[i];
        }
    }
    if (alice > bob) cout << "Alice\n";
    else if (bob > alice) cout << "Bob\n";
    else cout << "Tie\n";
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

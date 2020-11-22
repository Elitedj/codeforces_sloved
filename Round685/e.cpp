#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 1e9 + 7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5 + 5;
 
int t;
 
int ans[maxn];
int vis[maxn];
void slove() {
    int n;
    cin >> n;
    int fi = -1;
    for (int i=2; i<=n; i++) {
        cout << "XOR " << 1 << ' ' << i << '\n';
        cout.flush();
        int x;
        cin >> x;
        ans[i] = x;
        if (vis[x]) {
            if (fi == -1) {
                cout << "AND " << vis[x] << ' ' << i << '\n';
                cout.flush();
                int xx;
                cin >> xx;
                fi = (x ^ xx);
            }
        } else {
            vis[x] = i;
        }
    }
    if (fi == -1) {
        int b, c;
        for (int i=2; i<=3; i++) {
            for (int j=i+1; j<=n; j++) {
                if ((ans[i] ^ ans[j]) == n - 1) {
                    b = i;
                    c = j;
                }
            }
        }
        int xorab = ans[b], xorac = ans[c], xorbc = (xorab ^ xorac);
        int andab, andac;
        cout << "AND " << 1 << ' ' << b << '\n';
        cout.flush();
        cin >> andab;
 
        cout << "AND " << 1 << ' ' << c << '\n';
        cout.flush();
        cin >> andac;
 
        int andbc = 0;
 
        int x = xorab + 2 * andab;
        int y = xorac + 2 * andac;
        int z = xorbc + 2 * andbc;
 
        fi = (x + y - z) / 2;
    }
    ans[1] = fi;
    for (int i=2; i<=n; i++) ans[i] = (fi ^ ans[i]);
    cout << "!";
    for (int i=1; i<=n; i++) cout << ' ' << ans[i];
    cout << "\n";
    cout .flush();
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    // cin >> t;
    while (t--) slove();
    return 0;
}

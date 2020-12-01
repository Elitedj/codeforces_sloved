#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 1e9 + 7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5 + 5;
 
int t;
 
int a[maxn];
void slove() {
    int n, x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i + 1]) {
            if (x >= a[i]) {
                ans = -1;
                break;
            } else {
                int pos = i;
                while (pos && a[pos - 1] > x) pos--;
                while (pos <= i) {
                    swap(a[pos], x);
                    if (a[pos] != x) ans++;
                    pos++;
                }
                if (a[i] > a[i + 1]) {
                    ans = -1;
                    break;
                }
            }
        }
    }
    cout << ans << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

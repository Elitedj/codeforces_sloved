#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5 + 5;
 
int t;
 
int a[maxn];
void slove() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i<=n*k; i++) cin >> a[i];
    ll ans = 0;
    sort(a + 1, a + n * k + 1);
    int idx = (n + 1) / 2;
    int addl = idx - 1, addr = n - addl;
    int l = 0, r = n * k + 1;
    // cout << addl << ' ' << addr << '\n';
    while (l + 1 < r) {
        r -= addr;
        l += addl;
        ans += a[r];
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

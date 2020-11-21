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
int a[maxn];
void slove() {
    int n;
    cin >> n;
    ll sum = 0;
    ll mx = 0;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, 1ll * a[i]);
    }
    ll k = (sum / (n - 1)) + (sum % (n - 1) != 0);
    if (mx > k) cout << mx * (n - 1) - sum << '\n';
    else cout << k * (n - 1) - sum << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

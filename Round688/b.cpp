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
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    if (n == 2) {
        cout << "0\n";
        return;
    }
    ll ans = 0;
    for (int i = 1; i < n; i++) {
        ans += abs(a[i] - a[i + 1]);
    }
    ll tmp = ans;
    for (int i = 2; i <= n - 1; i++) {
        tmp = min(tmp, ans - abs(a[i] - a[i - 1]) - abs(a[i] - a[i + 1]) + abs(a[i - 1] - a[i + 1]));
    }
    tmp = min(tmp, ans - abs(a[1] - a[2]));
    tmp = min(tmp, ans - abs(a[n] - a[n - 1]));
    ans = min(ans, tmp);
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

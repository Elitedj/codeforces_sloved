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
 
ll a[maxn];
 
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
 
void slove() {
    int n;
    ll k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    ll g = 0;
    for (int i = 2; i <= n; i++) g = gcd(g, abs(a[i] - a[1]));
    if (abs(k - a[1]) % g) cout << "NO\n";
    else cout << "YES\n";
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

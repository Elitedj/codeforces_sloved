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
 
void slove() {
    ll n, x;
    cin >> n;
    x = n;
    vector<P> fac;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            fac.push_back(P(i, cnt));
        }
    }
    if (n > 1) fac.push_back(P(n, 1));
    ll fa = -1;
    int mx = 0;
    for (auto v : fac) {
        if (v.second > mx) {
            mx = v.second;
            fa = v.first;
        }
    }
    cout << mx << '\n';
    for (int i=1; i<mx; i++) {
        cout << fa << ' ';
        x /= fa;
    }
    cout << x << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

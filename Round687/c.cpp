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
    int n, p, k;
    cin >> n >> p >> k;
    p--;
    string s;
    cin >> s;
    ll x, y;
    cin >> x >> y;
    vector<vector<int> > pos(k);
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') pos[i % k].push_back(i);
    }
    ll ans = INF;
    for (int i = 0; p < n - i; i++) {
        int L = i + p;
        int rem = (i + p) % k;
        int cnt = pos[rem].end() - lower_bound(pos[rem].begin(), pos[rem].end(), L);
        ll res = x * cnt + y * i;
        ans = min(ans, res);
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

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
    int n;
    cin >> n;
    vector<P> ans;
    while (n > 2) {
        int be = ceil(sqrt(n));
        for (int i = be + 1; i < n; i++) ans.push_back(P(i, i + 1));
        ans.push_back(P(n, be));
        ans.push_back(P(n, be));
        n = be;
    }
    cout << ans.size() << '\n';
    for (auto v : ans) cout << v.first << ' ' << v.second << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

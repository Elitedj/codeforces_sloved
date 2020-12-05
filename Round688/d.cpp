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
 
void slove() {
    ll x;
    cin >> x;
    if (x & 1) {
        cout << "-1\n";
        return;
    }
    vector<int> ans;
    for (int i = 60; i >= 1; i--) {
        ll tmp = (2ll << i) - 2;
        while (x >= tmp) {
            x -= tmp;
            ans.push_back(1);
            int cnt = i - 1;
            while (cnt--) ans.push_back(0);
        }
    }
    cout << ans.size() << '\n';
    for (auto v : ans) cout << v << ' ';
    cout << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

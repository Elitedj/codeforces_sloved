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
 
int t;
 
void slove() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ok = 0;
    for (int i = 0; i <= 4; i++) {
        string tmp = s.substr(0, i) + s.substr(n - 4 + i, 4 - i);
        // DEBUG(tmp);
        if (tmp == "2020") {
            ok = 1;
        }
    }
    if (ok) cout << "YES\n";
    else cout << "NO\n";
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

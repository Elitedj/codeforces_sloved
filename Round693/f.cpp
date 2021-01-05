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
    int n, m;
    cin >> n >> m;
    map<int, int> block;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        block[y] |= (1 << (x - 1));
    }
    block[n + 1] = 3;
    int last_c = 0, cur_col = 0;
    for (auto v : block) {
        int c = v.first, col = v.second;
        if ((c - last_c) % 2 == 0) {
            if (cur_col == 1) cur_col = 2;
            else if (cur_col == 2) cur_col = 1;
        }
        if (cur_col & col) {
            break;
        }
        if (col == 1) {
            if (cur_col) cur_col = 0;
            else cur_col = 2;
        } else if (col == 2) {
            if (cur_col) cur_col = 0;
            else cur_col = 1;
        } else cur_col = 0;
        last_c = c;
    }
    if (cur_col) cout << "NO\n";
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

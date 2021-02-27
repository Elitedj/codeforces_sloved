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
    int px, py;
    cin >> px >> py;
    char chx = ' ', chy = ' ';
    if (px > 0) chx = 'R';
    else if (px < 0) chx = 'L';
    if (py > 0) chy = 'U';
    else if (py < 0 ) chy = 'D';
    px = abs(px);
    py = abs(py);
    int cntx = 0, cnty = 0;
    string s;
    cin >> s;
    for (auto c : s) {
        if (c == chx) cntx++;
        if (c == chy) cnty++;
    }
    if (cntx >= px && cnty >= py) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

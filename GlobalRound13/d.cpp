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
    int a, b;
    cin >> a >> b;
    vector<int> aa, bb;
    for (int i = 0; i < 30; i++) {
        if (a & (1 << i)) aa.push_back(i);
        if (b & (1 << i)) bb.push_back(i);
    }
    if (a > b || (int)aa.size() < (int)bb.size()) {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < (int)bb.size(); i++) {
        if (aa[i] > bb[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

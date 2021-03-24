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
    if (n & 1) {
        int win = (n - 1) / 2;
        for (int i = 1; i <= n; i++) {
                int cnt = 0;
            for (int j = i + 1; j <= n; j++) {
                cnt++;
                if (cnt <= win) cout << "1 ";
                else cout << "-1 ";
            }
        }
    } else {
        int win = (n - 2) / 2;
        for (int i = 1; i <= n; i++) {
            int cnt = 0;
            for (int j = i + 1; j <= n; j++) {
                cnt++;
                if (cnt <= win) cout << "1 ";
                else if (cnt == win + 1) cout << "0 ";
                else cout << "-1 ";
            }
        }
    }
    cout << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

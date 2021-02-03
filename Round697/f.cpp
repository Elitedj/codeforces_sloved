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

int n;
int a[1005][1005], b[1005][1005];
void slove() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            char c;
            cin >> c;
            a[i][j] = c - '0';
        }
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= n; j++) {
            char c;
            cin >> c;
            b[i][j] = c - '0';
        }
    for (int i = 1; i <= n; i++) {
        if (a[i][1] != b[i][1]) {
            for (int j = 1; j <= n; j++) a[i][j] = 1 - a[i][j];
        }
    }
    for (int j = 1; j <= n; j++) {
        if (a[1][j] != b[1][j]) {
            for (int i = 1; i <= n; i++) a[i][j] = 1 - a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] != b[i][j]) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

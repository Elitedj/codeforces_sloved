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

int rev[10] = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};
int H, M;
int check(int h, int m) {
    int ho = h / 10, ht = h % 10;
    int mo = m / 10, mt = m % 10;
    int HO = rev[mt], HT = rev[mo];
    int MO = rev[ht], MT = rev[ho];
    if (min(HO, min(HT, min(MO, MT))) < 0) return 0;
    h = HO * 10 + HT, m = MO * 10 + MT;
    if (h < H && m < M) return 1;
    return 0;
}
void slove() {
    char ch;
    int h, m;
    cin >> H >> M;
    cin >> h >> ch >> m;
    while (1) {
        if (check(h, m)) {
            printf("%02d:%02d\n", h, m);
            return;
        }
        m++;
        if (m >= M) {
            m = 0;
            h++;
            if (h >= H)
                h = 0;
        }
    }
}

int main() {
    // freopen("in.txt", "r", stdin);
    // IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

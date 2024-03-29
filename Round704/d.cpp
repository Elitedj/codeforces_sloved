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

char s[maxn], t[maxn];
void slove() {
    int a, b, k;
    cin >> a >> b >> k;
    int n = a + b;
    for (int i = 0; i < n; i++) s[i] = t[i] = '0';
    s[n] = t[n] = '\0';
    if (k == 0) {
        for (int i = 0; i < b; i++) s[i] = t[i] = '1';
        cout << "Yes\n" << s << '\n' << t << '\n';
        return;
    }
    if (!a || b == 1 || k >= n - 1) {
        cout << "No\n";
        return;
    }
    s[0] = t[0] = '1';
    s[1] = t[1 + k] = '1';
    b -= 2;
    for (int i = 2; i < n && b; i++) {
        if (i == 1 + k) continue;
        s[i] = t[i] = '1';
        b--;
    }
    cout << "Yes\n" << s << '\n' << t << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    // cin >> T;
    while (T--) slove();
    return 0;
}

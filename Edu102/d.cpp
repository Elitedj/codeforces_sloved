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

int pre[maxn], pre_mi[maxn], pre_mx[maxn];
int suf[maxn], suf_mi[maxn], suf_mx[maxn];

void slove() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    s = "@" + s;
    for (int i = 1; i <= n; i++) {
        int val = (s[i] == '+' ? 1 : -1);
        pre[i] = pre[i - 1] + val;
        pre_mi[i] = min(pre[i], pre_mi[i - 1]);
        pre_mx[i] = max(pre[i], pre_mx[i - 1]);
    }
    suf[n + 1] = suf_mi[n + 1] = suf_mx[n + 1] = 0;
    for (int i = n; i >= 1; i--) {
        int val = (s[i] == '+' ? 1 : -1);
        suf[i] = suf[i + 1] + val;
        suf_mi[i] = min(0, suf_mi[i + 1] + val);
        suf_mx[i] = max(0, suf_mx[i + 1] + val);
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        int mx = 0, mi = 0;
        mx = max(mx, pre_mx[l - 1]);
        mi = min(mi, pre_mi[l - 1]);
        int tmp = pre[l - 1];
        mx = max(mx, tmp + suf_mx[r + 1]);
        mi = min(mi, tmp + suf_mi[r + 1]);
        cout << mx - mi + 1 << '\n';
    }
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

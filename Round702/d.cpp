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

int a[maxn];
map<int, int> ans;
void fun(int l, int r, int dep) {
    if (l > r) return;
    if (l == r) {
        ans[a[l]] = dep;
        return;
    }
    int idx = l;
    for (int i = l; i <= r; i++) {
        if (a[i] > a[idx]) idx = i;
    }
    ans[a[idx]] = dep;
    if (l != idx) fun(l, idx - 1, dep + 1);
    if (idx != r) fun(idx + 1, r, dep + 1);
}
void slove() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    ans.clear();
    fun(1, n, 0);
    for (int i = 1; i <= n; i++) cout << ans[a[i]] << ' ';
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

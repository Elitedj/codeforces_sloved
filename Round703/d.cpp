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

int n, k;
int a[maxn];
int pre[maxn], minpre[maxn];
int check(int x) {
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + (a[i] >= x ? 1 : -1);
        minpre[i] = min(minpre[i - 1], pre[i]);
    }
    for (int i = k; i <= n; i++) {
        if (pre[i] - minpre[i - k] >= 1) return 1;
    }
    return 0;
}

int main() {
    // freopen("in.txt", "r", stdin);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    int l = 1, r = n;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (check(mid)) {
            l = mid + 1;
            ans = mid;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}

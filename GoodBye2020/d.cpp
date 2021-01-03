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
    vector<int> a(n, 0), d(n, 0);
    ll sum = 0;
    for (auto &v : a) {
        cin >> v;
        sum += v;
    }
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        d[u]++, d[v]++;
    }
    priority_queue<P> que;
    for (int i = 0; i < n; i++) {
        d[i]--;
        if (d[i]) que.push(P(a[i], d[i]));
    }
    vector<ll> ans(n - 1, 0);
    ans[0] = sum;
    for (int i = 1; i < n - 1; i++) {
        if (!que.empty()) {
            P tmp = que.top();
            que.pop();
            sum += tmp.first;
            tmp.second--;
            if (tmp.second)
                que.push(tmp);
        }
        ans[i] = sum;
    }
    for (auto v : ans) cout << v << ' ';
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

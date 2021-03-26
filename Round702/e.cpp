#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, int> P;
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
    vector<P> a;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a.push_back(P(x, i));
    }
    sort(a.begin(), a.end());
    int idx = 0;
    ll sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += a[i].first;
        if (a[i + 1].first > sum) idx = i + 1;
    }
    vector<int> ans;
    for (int i = idx; i < n; i++) ans.push_back(a[i].second);
    sort(ans.begin(), ans.end());
    cout << ans.size() << '\n';
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

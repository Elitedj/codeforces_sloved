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
int vis[maxn << 1];
vector<int> v1, v2;

int check(int x) {
    for (int i = 0; i < x; i++) {
        if (v1[i] > v2[n - x + i]) return 1;
    }
    for (int i = 0; i < n - x; i++) {
        if (v1[i + x] < v2[i]) return 2;
    }
    return 0;   
}

void slove() {
    cin >> n;
    for (int i = 1; i <= (n << 1); i++) vis[i] = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        vis[x] = 1;
    }
    v1.clear(); v2.clear();
    for (int i = 1; i <= (n << 1); i++) {
        if (vis[i]) v1.push_back(i);
        else v2.push_back(i);
    }
    int l = 0, r = n;
    int L = n;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (check(mid) != 2) {
            L = mid;
            r = mid - 1;
        } else l = mid + 1;
    }

    l = 0, r = n;
    int R = 0;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (check(mid) != 1) {
            R = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    cout << R - L + 1 << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

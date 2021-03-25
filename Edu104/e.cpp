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

int A[4][maxn];
void slove() {
    int n[4];
    for (int i = 0; i < 4; i++) cin >> n[i];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < n[i]; j++) cin >> A[i][j];
    }
    vector<set<int>> cant[3];
    for (int i = 0; i < 3; i++) {
        cant[i] = vector<set<int>>(n[i + 1]);
        int x;
        cin >> x;
        for (int j = 1; j <= x; j++) {
            int u, v;
            cin >> u >> v;
            u--, v--;
            cant[i][v].insert((u));
        }
    }
    set<P> cost[4];
    for (int i = 0; i < n[0]; i++) cost[0].insert(P(A[0][i], i));
    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < n[i]; j++) {
            auto it = cost[i - 1].begin();
            while (it != cost[i - 1].end() && cant[i - 1][j].count(it->second)) it++;
            if (it != cost[i - 1].end()) {
                cost[i].insert(P(it->first + A[i][j], j));
            }
        }
    }
    if (cost[3].size() == 0) cout << "-1\n";
    else cout << cost[3].begin()->first << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    // cin >> T;
    while (T--) slove();
    return 0;
}

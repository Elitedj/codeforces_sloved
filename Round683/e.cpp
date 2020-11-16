#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5 + 5;
 
int t;
 
int tree[32 * maxn][2];
int tot = 1;
 
void insert(int x) {
    int now = 1;
    for (int i=31; i>=0; i--) {
        int dir = ((x >> i) & 1);
        if (tree[now][dir] == 0) tree[now][dir] = ++tot;
        now = tree[now][dir];
    }
}
 
int dfs(int x) {
    if (x == 0) return 0;
    if (!tree[x][0] && !tree[x][1]) return 1;
    return max(dfs(tree[x][0]) + (tree[x][1] != 0), dfs(tree[x][1]) + (tree[x][0] != 0));
}
 
void slove() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        int x;
        cin >> x;
        insert(x);
    }
    cout << n - dfs(1) << '\n';
}
 
 
int main() {
    // freopen("in.txt", "r", stdin);
    t = 1;
    // cin >> t;
    while (t--) slove();
    return 0;
}

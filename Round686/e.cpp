#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 1e9 + 7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5 + 5;
 
int t;
 
int n, tot, ok;
int head[maxn], vis[maxn], cnt[maxn], fa[maxn], in[maxn];
vector<int> f;
 
struct Edge {
    int to, nxt;
}edge[maxn<<1];
 
void addedge(int u, int v) {
    edge[++tot].to = v;
    edge[tot].nxt = head[u];
    head[u] = tot;
}
 
void init() {
    f.clear();
    tot = ok = 0;
    for (int i=1; i<=n; i++) {
        head[i] = vis[i] = cnt[i] = in[i] = fa[i] =  0;
    }
}
 
void dfs(int u, int p) {
    fa[u] = p;
    for (int i=head[u]; i; i=edge[i].nxt) {
        if (ok) return;
        int v = edge[i].to;
        if (v == p) continue;
        if (vis[v]) {
            vis[v] = 2;
            fa[v] = u;
            ok = 1;
            break;
        } else {
            vis[v] = 1;
            dfs(v, u);
        }
    }
}
 
int get_f() {
    int be = -1;
    for (int i=1; i<=n; i++) {
        if (vis[i] == 2) {
            be = i;
            break;
        }
    }
    int sz = 1;
    int tmp = be;
    while (fa[tmp] != be) {
        in[tmp] = 1;
        tmp = fa[tmp];
        sz++;
    }
    in[tmp] = 1;
    return sz;
}
 
void bfs(int u, int dep, ll &ans, int sz) {
    queue<P> que;
    vis[u] = 1;
    que.push(P(u, dep));
    int be = u;
    int sum = 0;
    while (!que.empty()) {
        P p = que.front();
        que.pop();
        if (p.first != be) {
            ans += 1ll * 2 * (sz - 1);
            sum++;
        }
        int u = p.first;
        for (int i = head[u]; i; i = edge[i].nxt) {
            int v = edge[i].to;
            if (vis[v]) continue;
            vis[v] = 1;
            que.push(P(v, p.second + 1));
        }
    }
    ans += 1ll * sum * (1 + sum) / 2;
    if (sum != 0)
        f.push_back(sum);
}
 
void slove() { 
    cin >> n;
    init();
    for (int i=1; i<=n; i++) {
        int u, v;
        cin >> u >> v;
        addedge(u, v);
        addedge(v, u);
    }
    vis[1] = 1;
    dfs(1, 0);
    int sz = get_f();
    ll ans = 1ll * (sz - 1) * sz;
    for (int i=1; i<=n; i++) {
        if (in[i]) vis[i] = 1;
        else vis[i] = 0;
    }
    for (int i=1; i<=n; i++) {
        if (in[i]) {
            bfs(i, 0, ans, sz);
        }
    }
    ll sum = 0;
    for (auto v:f) sum += v;
    ll tmp = 0;
    for (auto v:f) {
        tmp += 1ll * 2 * v * (sum - v);
    }
    ans += tmp / 2;
    cout << ans << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

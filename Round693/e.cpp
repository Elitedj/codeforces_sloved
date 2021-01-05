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
const int maxn = 5e5 + 5;
 
int T;
 
struct node {
    int idx, h, w;
};
 
bool cmp(node a, node b) {
    return a.w == b.w ? a.h < b.h : a.w < b.w;
}
 
P tree[maxn << 3];
 
void build(vector<P> &a, int pos, int l, int r) {
    if (l == r) {
        tree[pos] = a[l];
        return;
    }
    int mid = (l + r) >> 1;
    build(a, pos<<1, l, mid);
    build(a, pos<<1|1, mid + 1, r);
    tree[pos] = P(inf, -1);
    if (tree[pos].first > tree[pos<<1].first) tree[pos] = tree[pos<<1];
    if (tree[pos].first > tree[pos<<1|1].first) tree[pos] = tree[pos<<1|1];
}
 
 
P query(int pos, int l, int r, int x, int y) {
    if (l > r) return P(inf, -1);
    if (x <= l && r <= y) {
        return tree[pos];
    }
    int mid = (l + r) >> 1;
    P ans = P(inf, -1);
    if (x <= mid) {
        P tmp = query(pos<<1, l, mid, x, y);
        if (ans.first > tmp.first) ans = tmp;
    }
    if (y > mid) {
        P tmp = query(pos<<1|1, mid + 1, r, x, y);
        if (ans.first > tmp.first) ans = tmp;
    }
    return ans;
}
 
void slove() {
    int n;
    cin >> n;
    vector<node> a;
    vector<int> ans(n + 1, -1);
    for (int i = 1; i <= n; i++) {
        node tmp;
        tmp.idx = i;
        cin >> tmp.h >> tmp.w;
        a.push_back(tmp);
        swap(tmp.h, tmp.w);
        a.push_back(tmp);
    }
    sort(a.begin(), a.end(), cmp);
    vector<P> newa;
    newa.push_back(P(-1, -1));
    int lastw = -1;
    map<int, int> wpos;
    int tot = 0;
    for (auto v : a) {
        if (v.w == lastw) continue;
        newa.push_back(P(v.h, v.idx));
        tot++;
        lastw = v.w;
        wpos[lastw] = tot;
    }
    build(newa, 1, 1, tot);
    for (auto v : a) {
        int r = wpos[v.w] - 1;
        if (r < 1) continue;
        P res = query(1, 1, tot, 1, r);
        // cout << "--->" << res.first << ' ' << res.second << '\n';
        // cout << "===>" << v.h << ' ' << v.idx << '\n';
        if (res.first < v.h) ans[v.idx] = res.second;
    }
    for (int i = 1; i <= n; i++) cout << ans[i] << ' ';
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

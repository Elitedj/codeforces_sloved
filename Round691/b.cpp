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
 
// int dir[4][2] = {0, 1, 0, -1, 1, 0, -1, 0};
// struct node {
//     int x, y, dir;
//     node () {};
//     node (int xx, int yy, int ddir) {
//         x = xx;
//         y = yy;
//         dir = ddir;
//     };
// };
// void slove() {
//     int n;
//     cin >> n;
//     set<P> ans;
//     queue<node> q;
//     q.push(node(0, 1, 0));
//     q.push(node(0, -1, 1));
//     q.push(node(1, 0, 2));
//     q.push(node(-1, 0, 3));
//     n--;
//     while (n--) {
//         queue<node> tmp;
//         while (!q.empty()) {
//             node cur = q.front();
//             q.pop();
//             // ans.insert(P(cur.x, cur.y));
//             int be = 1, en = 2;
//             if (cur.dir == 0 || cur.dir == 2) {
//                 be = 2, en = 3;
//             }
//             for (int i = be; i <= en; i++) {
//                 int nx = cur.x + dir[(cur.dir + i) % 4][0];
//                 int ny = cur.y + dir[(cur.dir + i) % 4][1];
//                 int ndir = (cur.dir + i) % 4;
//                 tmp.push(node(nx, ny, ndir));
//             }
//         }
//         q = tmp;
//     }
//     while (!q.empty()) {
//         node cur = q.front();
//         q.pop();
//         ans.insert(P(cur.x, cur.y));
//     }
//     // for (auto v : ans) cout << v.first << ' ' << v.second << '\n';
//     cout << ans.size() << '\n';
// }
 
int ans[1005];
void slove() {
    int n;
    cin >> n;
    ans[1] = 4;
    int idx = 2;
    for (int i = 2; i <= 1000; i += 2) {
        ans[i] = idx * idx;
        idx++;
    }
    int be = 12;
    ans[3] = 12;
    for (int i = 5; i <= 1000; i += 2) {
        ans[i] = ans[i - 2] + be;
        be += 4;
    }
    cout << ans[n] << "\n";
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    // cin >> T;
    while (T--) slove();
    return 0;
}

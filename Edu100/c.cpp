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
ll t[maxn], x[maxn];
void slove() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> t[i] >> x[i];
    t[n] = INF;
    int idx = 0, ans = 0;
    ll cur_x = 0, cur_t = 0;
    while (idx < n) {
        cur_t = t[idx];
        ll dis_t = abs(cur_x - x[idx]);
        if (dis_t == 0) {
            ans++;
            idx++;
            continue;
        }
        int dir = 0;
        if (cur_x > x[idx]) dir = -1;
        else dir = 1;
        while (idx < n && cur_t + dis_t > t[idx]) {
            ll tmp_dis_t = abs(cur_x - x[idx]);
            if (tmp_dis_t <= dis_t) {
                if ((cur_x >= x[idx] && dir == -1) || (cur_x <= x[idx] && dir == 1)) {
                    if (t[idx + 1] >= cur_t + tmp_dis_t && cur_t + tmp_dis_t >= t[idx]) ans++;
                }
            }
            idx++;
        }
        cur_t += dis_t;
        cur_x += dis_t * dir;
    }
    cout << ans << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

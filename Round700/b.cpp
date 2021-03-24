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
struct Monster {
    ll power, hp;
}monster[maxn];
bool cmp(Monster a, Monster b) {
    return a.power < b.power;
}
void slove() {
    ll power, hp, n;
    cin >> power >> hp >> n;
    for (int i = 1; i <= n; i++) cin >> monster[i].power;
    for (int i = 1; i <= n; i++) cin >> monster[i].hp;
    sort(monster + 1, monster + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        ll cnt = monster[i].hp / power + (monster[i].hp % power != 0);
        if (i == n) cnt--;
        hp -= cnt * monster[i].power;
        if (hp <= 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

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
const int maxn = 3e5 + 5;
 
int t;
 
int l[maxn], r[maxn];
int L[maxn], R[maxn];
 
void slove() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> l[i] >> r[i];
    for (int i = 1; i <= n; i++) L[i] = l[i], R[i] = r[i];
    sort(l + 1, l + n + 1);
    sort(r + 1, r + n + 1);
    int Lm = unique(l + 1, l + n + 1) - l - 1;
    int Rm = unique(r + 1, r + n + 1) - r - 1;
    vector<int> cntL(Lm + 1, 0), cntR(Rm + 1, 0);
    for (int i = 1; i <= n; i++) {
        int posL = lower_bound(l + 1, l + Lm + 1, L[i]) - l;
        int posR = lower_bound(r + 1, r + Rm + 1, R[i]) - r;
        cntL[posL]++;
        cntR[posR]++;
    }
    vector<int> preL(Lm + 1, 0), preR(Rm + 1, 0);
    for (int i = 1; i <= Lm; i++) {
        preL[i] = preL[i - 1] + cntL[i];
    }
    for (int i = 1; i <= Rm; i++) {
        preR[i] = preR[i - 1] + cntR[i];
    }
    int ans = inf;
    for (int i = 1; i <= n; i++) {
        int posL = lower_bound(l + 1, l + Lm + 1, R[i] + 1) - l;
        int posR = upper_bound(r + 1, r + Rm + 1, L[i] - 1) - r;
        posR--;
        // DEBUG(preL[Lm] - preL[posL - 1] + preR[posR - 1]);
        ans = min(ans, preL[Lm] - preL[posL - 1] + preR[posR]);
    }
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

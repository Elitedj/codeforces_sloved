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
 
int t;
 
int a[maxn];
void slove() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    int idx = n;
    while (idx && a[idx] == idx) idx--;
    double ans = 1.0;
    while (m--) {
        int r;
        double p;
        scanf("%d%lf", &r, &p);
        if (r >= idx) ans *= (1.0 - p);
    }
    if (idx < 1) printf("1.000000\n");
    else printf("%.6lf\n", 1.0 - ans);
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    // IO;
    t = 1;
    scanf("%d", &t);
    while (t--) slove();
    return 0;
}

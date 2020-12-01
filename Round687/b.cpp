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
 
int col[maxn];
void slove() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> col[i];
    int ans = inf;
    for (int c = 1; c <= 100; c++) {
        int sum = 0, r = 0;
        for (int i = 1; i <= n; i++) {
            if (col[i] == c || i <= r) continue;
            sum++;
            r = i + k - 1;
        }
        ans = min(ans, sum);
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

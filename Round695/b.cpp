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
 
int T;
 
int a[maxn], f[maxn];
void slove() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = 0;
    }
    if (n <= 2) {
        cout << "0\n";
        return ;
    }
    int ans = 0;
    for (int i = 2; i < n; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) f[i] = 1, ans++;
        if (a[i] < a[i - 1] && a[i] < a[i + 1]) f[i] = 1, ans++;
    }
    int tmp_ans = ans;
    for (int i = 2; i < n; i++) {
        int tmp = a[i];
        for (int j = -1; j <= 1; j += 2) {
            int sum = tmp_ans;
            a[i] = a[i + j];
            for (int k = i - 1; k <= i + 1; k++) {
                if (k == 1 || k == n) continue;
                sum -= f[k];
                if (a[k] > a[k - 1] && a[k] > a[k + 1]) sum++;
                if (a[k] < a[k - 1] && a[k] < a[k + 1]) sum++;
            }
            ans = min(ans, sum);
        }
        a[i] = tmp;
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

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
 
int a[maxn];
void slove() {
    int n;
    cin >> n;
    int sum = 0, one = 0, two = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] == 1) one++;
        else two++;
    }
    if (sum & 1) {
        cout << "NO\n";
        return;
    }
    if (two & 1) {
        if (one < 2) {
            cout << "NO\n";
            return;
        }
        one -= 2;
        if (one & 1) {
            cout << "NO\n";
            return;
        } else {
            cout << "YES\n";
            return;
        }
    } else {
        if (one & 1) cout << "NO\n";
        else cout << "YES\n";
        return;
    }
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

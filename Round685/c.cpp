#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 1e9 + 7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5 + 5;
 
int t;
 
void slove() {
    int n, k;
    cin >> n >> k;
    string a, b;
    cin >> a >> b;
    vector<int> cnta(26, 0), cntb(26, 0);
    for (int i=0; i<n; i++) {
        cnta[a[i] - 'a']++;
        cntb[b[i] - 'a']++;
    }
    for (int i=25; i>=0; i--) {
        int mn;
        mn = min(cnta[i], cntb[i]);
        cnta[i] -= mn, cntb[i] -= mn;
        if (cnta[i] && cntb[i] == 0) {
            cout << "No\n";
            return;
        }
        if (cntb[i] == 0) continue;
        if (cntb[i] % k != 0) {
            cout << "No\n";
            return;
        }
        int ok = 0;
        for (int j=i; j>=0; j--) {
            if (cnta[j] >= k) {
                cnta[j] -= k;
                cntb[i] -= k;
                ok = 1;
                break;
            }
        }
        if (!ok) {
            cout << "No\n";
            return;
        }
        if (cntb[i]) i++;
    }
    cout << "Yes\n";
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

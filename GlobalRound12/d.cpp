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
    int n;
    cin >> n;
    vector<int> a(n), pos(n), cnt(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        --a[i];
        pos[a[i]] = i;
        cnt[a[i]]++;
    }
    string ans = string(n, '0');
    int ok = 1;
    for (auto v : cnt) {
        if (v != 1) {
            ok = 0;
            break;
        }
    }
    if (ok) ans[0] = '1';
    int k = 0, l = 0, r = n - 1;
    while (k < n - 1 && cnt[k] == 1 && (pos[k] == l || pos[k] == r)) {
        if (pos[k] == l) l++;
        else r--;
        k++;
    }
    for (int i = n - k; i < n; i++) ans[i] = '1';
    if (cnt[k]) ans[n - k - 1] = '1';
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

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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        int pos = l;
        int f = 0;
        char last = '-';
        for (int i=0; i<n; i++) {
            if (pos <= r && s[i] == s[pos]) {
                pos++;
                last = s[i];
            } else if (s[i] == last) f = 1;
        }
        if (pos > r && f) cout << "YES\n";
        else cout << "NO\n";
    }
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

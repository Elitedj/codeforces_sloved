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
    string s;
    cin >> s;
    int n = s.length();
    int ans = 0;
    int f1 = 0, f2 = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == '(') f1++;
        if (s[i] == ')') {
            if (f1) {
                f1--;
                ans++;
            }
        }
        if (s[i] == '[') f2++;
        if (s[i] == ']') {
            if (f2) {
                f2--;
                ans++;
            }
        }
    }
    cout << ans << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

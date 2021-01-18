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

int gcd(int a, int b) {
    return b == 0 ?  a: gcd(b, a % b);
}
void slove() {
    string s, t;
    cin >> s >> t;
    int slen = s.length(), tlen = t.length();
    int lcm = slen * tlen / gcd(slen, tlen);
    string ns = "", nt = "";
    for (int i = 1; i <= lcm / slen; i++) ns += s;
    for (int i = 1; i <= lcm / tlen; i++) nt += t;
    if (ns != nt) {
        cout << "-1\n";
        return;
    } else cout << ns << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

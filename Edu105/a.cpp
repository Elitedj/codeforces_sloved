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

int T;

int check(string s, int a, int b, int cc) {
    string t = "";
    for (auto c : s) {
        if (c == 'A') {
            if (a == 0) t += '(';
            else t += ')';
        } else if (c == 'B') {
            if (b == 0) t += '(';
            else t += ')';
        } else {
            if (cc == 0) t += '(';
            else t += ')';
        }
    }
    int sum = 0;
    for (auto c : t) {
        if (c == '(') sum++;
        else sum--;
        if (sum < 0) return 0;
    }
    if (sum == 0) return 1;
    else return 0;
}
void slove() {
    string s;
    cin >> s;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                if (check(s, i, j, k)) {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

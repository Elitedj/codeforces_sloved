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

void slove() {
    int n;
    string a;
    cin >> n >> a;
    string b = "";
    int lst = -1;
    for (int i = 0; i < n; i++) {
        int tmp = a[i] - '0' + 1;
        if (tmp == lst) tmp--;
        lst = tmp;
        b += (tmp - (a[i] - '0') + '0');
    }
    cout << b << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

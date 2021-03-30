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

int ask(int l, int r) {
    cout << "? " << l << ' ' << r << '\n';
    cout.flush();
    int x;
    cin >> x;
    return x;
}

int main() {
    int n;
    cin >> n;
    int tmp = ask(1, n);
    if (1 < tmp && ask(1, tmp) == tmp) {
        int l = 1, r = tmp;
        while (l + 1 < r) {
            int mid = (l + r) >> 1;
            if (ask(mid, tmp) == tmp) l = mid;
            else r = mid;
        }
        cout << "! " << l << '\n';
        cout.flush();
    } else {
        int l = tmp, r = n;
        while (l + 1 < r) {
            int mid = (l + r) >> 1;
            if (ask(tmp, mid) == tmp) r = mid;
            else l = mid;
        }
        cout << "! " << r << '\n';
        cout.flush();
    }
    return 0;
}

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

int a[maxn];
void slove() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<int> idx;
    idx.push_back(1);
    int mx = a[1];
    for (int i = 2; i <= n; i++) {
        if (a[i] > mx) {
            mx = a[i];
            idx.push_back(i);
        }
    }
    int r = n;
    for (int i = (int)idx.size() - 1; i >= 0; i--) {
        for (int j = idx[i]; j <= r; j++) cout << a[j] << ' ';
        r = idx[i] - 1;
    }
    cout << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

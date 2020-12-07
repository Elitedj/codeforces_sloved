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
 
int dis(P a, P b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}
 
void slove() {
    int n, k;
    cin >> n >> k;
    vector<P> a;
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        a.push_back(P(x, y));
    }
    int ok = 0;
    for (int i = 0; i < n; i++) {
        int tmp = 1;
        for (int j = 0; j < n; j++) {
            if (dis(a[i], a[j]) > k) tmp = 0;
        }
        if (tmp) ok = 1;
    }
    if (ok) cout << "1\n";
    else cout << "-1\n";
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e6 + 5;
 
int t;
 
 
void slove() {
    int n;
    ll w, sum = 0;
    cin >> n >> w;
    vector<pair<ll, int> > tmp;
    for (int i=1; i<=n; i++) {
        int x;
        cin >> x;
        tmp.push_back(make_pair(x, i));
    }
    sort(tmp.begin(), tmp.end());
    vector<int> ans;
    for (int i = n-1; i>=0; i--) {
        if (sum + tmp[i].first > w) continue;
        sum += tmp[i].first;
        ans.push_back(tmp[i].second);
    }
    if (sum * 2 < w) cout << "-1\n";
    else {
        cout << ans.size() << '\n';
        for (auto v:ans) cout << v << ' ';
        cout << '\n';
    }
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

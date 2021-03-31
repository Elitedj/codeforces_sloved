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

int a[maxn], b[maxn];
int cal(const vector<int>& a, const vector<int>& b) {
    int n = a.size(), m = b.size();
    // The number of boxs in the sp positions after box i
    vector<int> suf(n + 1);
    int r = m - 1;
    for (int i = n - 1; i >= 0; i--) {
        suf[i] = suf[i + 1];
        while (r >= 0 && b[r] > a[i]) r--;
        if (r >= 0 && b[r] == a[i]) suf[i]++;
    }
    int ans = 0;
    r = 0;
    for (int l = 0, i = 0; l < m; l++) {
        while (i < n && a[i] <= b[l] + i) i++;
        while (r < m && b[r] - b[l] < i) r++;
        ans = max(ans, r - l + suf[i]);
    }
    return ans;
}
void slove() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    vector<int> al, ar, bl, br;
    for (int i = 1; i <= n; i++) {
        if (a[i] < 0) al.push_back(-a[i]);
        else ar.push_back(a[i]);
    }
    for (int i = 1; i <= m; i++) {
        if (b[i] < 0) bl.push_back(-b[i]);
        else br.push_back(b[i]);
    }
    reverse(al.begin(), al.end());
    reverse(bl.begin(), bl.end());
    cout << cal(al, bl) + cal(ar, br) << '\n';
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

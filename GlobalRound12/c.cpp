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
    int n;
    cin >> n;
    vector<string> g;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        g.push_back(s);
    }
    int cnt[2][3] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (g[i][j] == 'O') cnt[0][(i + j) % 3]++;
            if (g[i][j] == 'X') cnt[1][(i + j) % 3]++;
        }
    }
    int x = 0;
    for (int i = 1; i < 3; i++) {
        if (cnt[0][i] + cnt[1][(i + 1) % 3] < cnt[0][x] + cnt[1][(x + 1) % 3]) x = i;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (g[i][j] == 'O' && (i + j) % 3 == x) g[i][j] = 'X';
            if (g[i][j] == 'X' && (i + j) % 3 == (x + 1) % 3) g[i][j] = 'O';
        }
        cout << g[i] << '\n';
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

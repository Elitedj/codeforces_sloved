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
    string s;
    cin >> n >> s;
    vector<int> cnt(26, 0);
    for (int i = 0; i < n; i++) cnt[s[i] - 'a']++;
    char a[] = {'b', 'u', 'g', 'y', 'r', 't'};
    for (int i = 0; i < 6; i++) {
        while (cnt[a[i] - 'a']) {
            cout << a[i];
            cnt[a[i] - 'a']--;
        }
    }
    for (int i = 0; i < 26; i++) {
        while (cnt[i]) {
            cout << (char)(i + 'a');
            cnt[i]--;
        }
    }
    cout << '\n';
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

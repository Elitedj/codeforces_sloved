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
    int n, k;
    string s;
    cin >> n >> k >> s;
    if (n % k != 0) {
        cout << "-1\n";
        return;
    }
    vector<int> cnt(26);
    for (int i = 0; i < n; i++) {
        cnt[s[i] - 'a']++;
    }
    int ok = 1;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % k) ok = 0;
    }
    if (ok) {
        cout << s << '\n';
        return;
    }
    for (int i = n - 1; i >= 0; i--) {
        cnt[s[i] - 'a']--;
        for (int j = s[i] - 'a' + 1; j < 26; j++) {
            cnt[j]++;
            int rm = 0;
            for (auto v : cnt) rm += (k - v % k) % k;
            if (rm < n - i) {
                cout << s.substr(0, i);
                cout << (char)(j + 'a');
                for (int q = 0; q < n - i - 1 - rm; q++) cout << 'a';
                for (int q = 0; q < 26; q++) {
                    while (cnt[q] % k) {
                        cout << (char)(q + 'a');
                        cnt[q]++;
                    }
                }
                cout << '\n';
                return;
            }
            cnt[j]--;
        }
    }
}

int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    T = 1;
    cin >> T;
    while (T--) slove();
    return 0;
}

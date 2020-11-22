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
    ll d, k;
    cin >> d >> k;
    ll a = 0, b = 0;
    while (1) {
        if (a <= b && (a + k) * (a + k) + b * b <= d * d) {
            a += k;
        } else if (a > b && a * a + (b + k) * (b + k) <= d * d) {
            b += k;
        } else break;
    }
    if (a == b) cout << "Utkarsh\n";
    else cout << "Ashish\n";
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

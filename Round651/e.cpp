#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout << "--->" << (x) << endl;
typedef pair<int, int> P;
const ll mod = 1e9 + 7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5 + 5;
 
/*
s和t的0和1的数量不同，则-1
移动时，只有移动1010或者0101格式的偶数串才有意义
记录下最多有几个连续的1和最多有几个连续的0(绝对值)
相加即可
*/
int main()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int sum = 0, mx = 0, mn = 0;
    for (int i = 0; i < n; i++)
    {
        sum += s[i] - t[i];
        mx = max(sum, mx);
        mn = min(sum, mn);
    }
    cout << (sum ? -1 : mx - mn) << '\n';
    return 0;
}

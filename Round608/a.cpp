/************************************************************************
* File Name : a.cpp
* Purpose : 
* Creation Date : 2020年01月22日
* Last Modified : 2020年01月22日 星期三 12时50分10秒
* Created By : Elitedj
************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
const int maxn = 2e5+5;
const int inf = 0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mod = 1e9+7;
const double PI = acos(-1);



int main()
{
    int a, b, c, d, e, f;
    cin>>a>>b>>c>>d>>e>>f;
    ll ans = 0;
    if(e>f)
    {
        int cnt = min(a, d);
        ans += 1ll * cnt * e;
        d -= cnt;
        cnt = min(b, min(c, d));
        ans += 1ll * cnt * f;
    }
    else
    {
        int cnt = min(b, min(c, d));
        ans += 1ll * cnt * f;
        d -= cnt;
        cnt = min(a, d);
        ans += 1ll * cnt * e;
    }
    cout<<ans<<endl;
    return 0;
}

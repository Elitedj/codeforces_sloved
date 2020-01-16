/************************************************************************
* File Name : b.cpp
* Purpose : 
* Creation Date : 2020年01月16日
* Last Modified : 2020年01月16日 星期四 22时18分11秒
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


map<int, int> mp;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        mp.clear();
        int n;
        scanf("%d", &n);
        for(int i=1;i<=n;i++)
        {
            int t;
            scanf("%d", &t);
            if(!(t&1))
            {
                int cnt = 0;
                while(!(t&1))
                {
                    cnt++;
                    t>>=1;
                }
                mp[t] = max(mp[t], cnt);
            }
        }
        ll ans = 0;
        for(auto it : mp)
            ans += it.second;
        printf("%lld\n", ans);
    }
    return 0;
}

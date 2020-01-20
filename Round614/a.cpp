/************************************************************************
* File Name : a.cpp
* Purpose : 
* Creation Date : 2020年01月20日
* Last Modified : 2020年01月20日 星期一 10时18分12秒
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
    int t;
    cin>>t;
    while(t--)
    {
        set<int> f;
        int n, s, k;
        cin>>n>>s>>k;
        for(int i=1;i<=k;i++)
        {
            int a;
            cin>>a;
            f.insert(a);
        }
        int ans = inf;
        for(int i=s;i<=s+1005;i++)
        {
            if(i>n)break;
            if(!f.count(i))
            {
                ans = min(ans, i-s);
                break;
            }
        }
        for(int i=s;i>=s-1005;i--)
        {
            if(i<1)break;
            if(!f.count(i))
            {
                ans = min(ans, s-i);
                break;
            }
        }
        if(ans == inf)
            ans = 0;
        cout<<ans<<endl;
    }
    return 0;
}

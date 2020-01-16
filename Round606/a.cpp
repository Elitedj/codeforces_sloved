/************************************************************************
* File Name : a.cpp
* Purpose : 
* Creation Date : 2020年01月16日
* Last Modified : 2020年01月16日 星期四 22时17分44秒
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
 
 
set<ll> s;
int main()
{
    for(int i=1;i<=9;i++)
    {
        ll t = i;
        while(t <= 1000000000)
        {
            s.insert(t);
            t = t*10 + i;
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int ans = 0;
        cin>>n;
        for(auto a : s)
        {
            if(a<=n)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}

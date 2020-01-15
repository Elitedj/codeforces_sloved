/************************************************************************
* File Name : c.cpp
* Purpose : 
* Creation Date : 2020年01月15日
* Last Modified : 2020年01月15日 星期三 19时38分36秒
* Created By : Elitedj
************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
const int maxn = 1e5+5;
const int inf = 0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mod = 1e9+7;
const double PI = acos(-1);


ll dp[25][1005];
int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        dp[1][i] = 1;
    for(int i=2;i<=2*m;i++)
        for(int j=1;j<=n;j++)
            for(int k=1;k<=j;k++)
                dp[i][j] = (dp[i][j] + dp[i-1][k])%mod;
    ll ans = 0;
    for(int i=1;i<=n;i++)
        ans = (ans + dp[2*m][i])%mod;
    cout<<ans<<endl;
    return 0;
}

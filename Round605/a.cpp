/************************************************************************
* File Name : a.cpp
* Purpose : 
* Creation Date : 2020年01月16日
* Last Modified : 2020年01月16日 星期四 20时53分23秒
* Created By : Elitedj
************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
const int maxn = 4e5+5;
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
        ll a, b, c;
        cin>>a>>b>>c;
        ll ans = INF;
        for(int i=-1;i<=1;i++)
            for(int j=-1;j<=1;j++)
                for(int k=-1;k<=1;k++)
                    ans = min(ans, abs(a+i-b-j) + abs(a+i-c-k) + abs(b+j-c-k));
        cout<<ans<<endl;
    }
    return 0;
}

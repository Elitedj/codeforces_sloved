/************************************************************************
* File Name : a.cpp
* Purpose : 
* Creation Date : 2020年02月24日
* Last Modified : 2020年02月24日 星期一 22时21分01秒
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
        int a[3];
        for(int i=0;i<3;i++)
            cin>>a[i];
        sort(a,a+3);
        int ans = 0;
        for(int i=0;i<3;i++)
            if(a[i])
            {
                a[i]--;
                ans++;
            }
        if(a[0]&&a[2])
        {
            a[0]--;
            a[2]--;
            ans++;
        }
        if(a[1]&&a[2])
        {
            a[1]--;
            a[2]--;
            ans++;
        }
        if(a[0]&&a[1])
        {
            a[0]--;
            a[1]--;
            ans++;
        }
        if(a[0]&&a[1]&&a[2])
            ans++;
        cout<<ans<<"\n";
    }
    return 0;
}

/************************************************************************
* File Name : b.cpp
* Purpose : 
* Creation Date : 2020年01月23日
* Last Modified : 2020年01月23日 星期四 22时38分12秒
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



struct node
{
    int x, y;
};
bool cmp(node a, node b)
{
    if(a.x!=b.x)
        return a.x < b.x;
    else
        return a.y < b.y;
}
node a[1005];
bool nok(int n)
{
    for(int i=1;i<n;i++)
    {
        if(a[i].y>a[i+1].y)
            return 1;
    }
    return 0;
}
int main()
{
    int t;
    IO;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i].x>>a[i].y;
        }
        sort(a+1, a+n+1, cmp);
        if(nok(n))
        {
            cout<<"NO\n";
            continue;
        }
        string ans;
        int x=0, y=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=x;j<a[i].x;j++)
                ans += 'R';
            x=a[i].x;
            for(int j=y;j<a[i].y;j++)
                ans += 'U';
            y=a[i].y;
        }
        cout<<"YES\n"<<ans<<"\n";
    }
    return 0;
}

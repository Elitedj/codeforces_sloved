/************************************************************************
* File Name : d.cpp
* Purpose : 
* Creation Date : 2020年01月16日
* Last Modified : 2020年01月16日 星期四 20时54分51秒
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


int a[maxn];
int l[maxn], r[maxn];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        r[i] = l[i] = 1;
    int ans = 1;
    for(int i=n-1;i>=1;i--)
    {
        if(a[i+1] > a[i])
            r[i] = r[i+1]+1;
        ans = max(ans, r[i]);
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i] > a[i-1])
            l[i] = l[i-1]+1;
        ans = max(ans, l[i]);
    }
    for(int i=1;i<=n-2;i++)
    {
        if(a[i+2] > a[i])
            ans = max(ans, l[i]+r[i+2]);
    }
    cout<<ans<<endl;
    return 0;
}

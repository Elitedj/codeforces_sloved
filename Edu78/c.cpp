/************************************************************************
* File Name : c.cpp
* Purpose : 
* Creation Date : 2020年01月27日
* Last Modified : 2020年01月27日 星期一 12时21分01秒
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


int a[maxn], pos[maxn];
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        for(int i=1;i<=2*n;i++)
        {
            scanf("%d", &a[i]);
        }
        for(int i=0;i<=2*n;i++)
            pos[i] = inf;
        pos[n] = n;
        int cnt = n;
        for(int i=2*n;i>=n+1;i--)
        {
            if(a[i]==2)cnt++;
            else cnt--;
            pos[cnt] = min(pos[cnt], i-(n+1));
        }
        int ans = n+pos[n];
        cnt = n;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==1)cnt++;
            else cnt--;
            ans = min(ans, n-i+pos[cnt]);
        }
        printf("%d\n", ans);
    }
    return 0;
}

/************************************************************************
* File Name : b.cpp
* Purpose : 
* Creation Date : 2020年01月15日
* Last Modified : 2020年01月15日 星期三 19时54分06秒
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

int num[maxn];
int n;
int pos[maxn];
int ans[maxn];
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d", &num[i]);
            pos[num[i]] = i;
            ans[num[i]] = 0;
        }
        int l = inf, r = -1;
        for(int i=1;i<=n;i++)
        {
            l = min(l, pos[i]);
            r = max(r, pos[i]);
            if(r-l+1 == i)
                ans[i] = 1;
        }
        for(int i=1;i<=n;i++)
            printf("%d", ans[i]);
        printf("\n");
    }
    return 0;
}

/************************************************************************
* File Name : c.cpp
* Purpose : 
* Creation Date : 2020年02月24日
* Last Modified : 2020年02月24日 星期一 22时21分40秒
* Created By : Elitedj
************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
const int maxn = 5e5+5;
const int inf = 0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mod = 1e9+7;
const double PI = acos(-1);


int n;
int a[maxn];
P tree[4*maxn];

void build(int p, int l, int r)
{
    if(l==r)
    {
        tree[p].first = a[l];
        tree[p].second = l;
        return ;
    }
    int mid = (l+r)>>1;
    build(p<<1, l, mid);
    build(p<<1|1, mid+1, r);
    tree[p] = min(tree[p<<1], tree[p<<1|1]);
    return;
}

P query(int p, int l, int r, int x, int y)
{
    if(x<=l && r<=y)
    {
        return tree[p];
    }
    int mid = (l+r)>>1;
    P ans = P(inf, inf);
    if(x<=mid)
        ans = min(ans, query(p<<1, l, mid, x, y));
    if(y>mid)
        ans = min(ans, query(p<<1|1, mid+1, r, x, y));
    return ans;
}

int b[maxn];

ll slove(int l, int r)
{
    if(l==r)
    {
        b[l] = a[l];
        return a[l];
    }
    if(l>r)
        return 0;
    P minn = query(1, 1, n, l, r);
    //cout<<l<<" "<<r<<"---->"<<minn.first<<" "<<minn.second<<endl;
    int i = minn.second;
    ll slovel = slove(l, i-1) + 1ll*minn.first*(r-i+1);
    ll slover = slove(i+1, r) + 1ll*minn.first*(i-l+1);
    if(slovel > slover)
    {
        for(int j=i;j<=r;j++)
            b[j] = a[i];
        return slovel;
    }
    else
    {
        for(int j=l;j<=i;j++)
            b[j] = a[i];
        return slover;
    }
    return max(slovel, slover);
}

int main()
{
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf("%d", &a[i]);
    build(1, 1, n);
    slove(1, n);
    for(int i=1;i<=n;i++)
        printf("%d ", b[i]);
    return 0;
}

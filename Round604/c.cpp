/************************************************************************
* File Name : c.cpp
* Purpose : 
* Creation Date : 2020年01月15日
* Last Modified : 2020年01月15日 星期三 19时56分19秒
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


int a[maxn];
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        for(int i=1;i<=n;i++)scanf("%d", &a[i]);
        int len = (n>>1);
        while(len && a[len]==a[len+1])len--;
        int g=0, s=0, b=0;
        int i=1;
        for(;i<=len;i++)
        {
            g++;
            if(a[i] != a[i+1])
            {
                i++;
                break;
            }
        }
        //cout<<"--->"<<i<<endl;
        for(; i<=len;i++)
        {
            s++;
            if(g<s && a[i]!=a[i+1])
            {
                i++;
                break;
            }
        }
        //cout<<"--->"<<i<<endl;
        for(; i<=len;i++)
            b++;
        if(g<s && g<b && g && s && b)
            printf("%d %d %d\n", g, s, b);
        else
            printf("0 0 0\n");
    }
    return 0;
}

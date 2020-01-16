/************************************************************************
* File Name : b.cpp
* Purpose : 
* Creation Date : 2020年01月16日
* Last Modified : 2020年01月16日 星期四 20时53分54秒
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


char s[maxn];
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", s);
        int len = strlen(s);
        int l, r, u, d;
        l=r=u=d=0;
        for(int i=0;i<len;i++)
            if(s[i]=='L')l++;
            else if(s[i]=='R')r++;
            else if(s[i]=='U')u++;
            else d++;
        int a=min(l,r), b=min(u,d);
        if(a==0 && b==0)
            printf("0\n\n");
        else if(a==0 || b==0)
        {
            if(a==0)
                printf("2\nUD\n");
            else
                printf("2\nLR\n");
        }
        else
        {
            printf("%d\n", 2*(a+b));
            for(int i=1;i<=b;i++)
                printf("U");
            for(int i=1;i<=a;i++)
                printf("R");
            for(int i=1;i<=b;i++)
                printf("D");
            for(int i=1;i<=a;i++)
                printf("L");
            printf("\n");
        }
    }
    return 0;
}

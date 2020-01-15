/************************************************************************
* File Name : d.cpp
* Purpose : 
* Creation Date : 2020年01月15日
* Last Modified : 2020年01月15日 星期三 19时56分01秒
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


deque<int> ans;
int a[4];

int main()
{
    int len=0;
    for(int i=0;i<4;i++)
    {
        scanf("%d", &a[i]);
        len += a[i];
    }
    for(int i=0;i<4;i++)
    {
        if(a[i])
        {
            a[i]--;
            ans.push_back(i);
            break;
        }
    }
    for(int i=2;i<=len;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[j]==0)continue;
            if(abs(ans.back()-j)==1)
            {
                a[j]--;
                ans.push_back(j);
                break;
            }
            if(abs(ans.front()-j)==1)
            {
                a[j]--;
                ans.push_front(j);
                break;
            }
        }
    }
    if(ans.size()==len)
    {
        printf("YES\n");
        for(auto a : ans)
            printf("%d ", a);
        printf("\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

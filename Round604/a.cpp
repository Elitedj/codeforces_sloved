/************************************************************************
* File Name : a.cpp
* Purpose : 
* Creation Date : 2020年01月15日
* Last Modified : 2020年01月15日 星期三 19时53分27秒
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
        scanf("%s", s+1);
        int len = strlen(s+1);
        int ok = 1;
        for(int i=1;i<=len;i++)
        {
            if(s[i]=='?')
            {
                if(s[i-1]!='a'&&s[i+1]!='a')s[i]='a';
                else if(s[i-1]!='b'&&s[i+1]!='b')s[i]='b';
                else s[i]='c';
            }
            else
            {
                if(s[i]==s[i-1])
                {
                    ok=0;
                    break;
                }
            }
        }
        if(!ok) printf("-1\n");
        else
        {
            for(int i=1;i<=len;i++)
                printf("%c", s[i]);
            printf("\n");
        }
    }
    return 0;
}

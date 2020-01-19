/************************************************************************
* File Name : c.cpp
* Purpose : 
* Creation Date : 2020年01月19日
* Last Modified : 2020年01月19日 星期日 20时19分02秒
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


set<int> t, o;
char s[maxn];
vector<int> ans;
int main()
{
    int CASE;
    scanf("%d", &CASE);
    while(CASE--)
    {
        t.clear();
        o.clear();
        ans.clear();
        scanf("%s", s+1);
        int len = strlen(s+1);
        for(int i=1;i<=len-2;i++)
        {
            if(s[i]=='o' && s[i+1]=='n' && s[i+2]=='e')
                o.insert(i);
            else if(s[i]=='t' && s[i+1]=='w' && s[i+2]=='o')
                t.insert(i);
        }
        for(auto a : t)
        {
            if(o.count(a+2))
            {
                ans.push_back(a+2);
                o.erase(a+2);
            }
            else
                ans.push_back(a+1);
        }
        for(auto a : o)
        {
            ans.push_back(a+1);
        }
        printf("%d\n", (int)ans.size());
        for(auto v : ans)
            printf("%d ", v);
        printf("\n");
    }
    return 0;
}

/************************************************************************
* File Name : c.cpp
* Purpose : 
* Creation Date : 2020年01月20日
* Last Modified : 2020年01月20日 星期一 13时34分13秒
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
 
 
char str[505];
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x;
        scanf("%d%s", &x, str);
        ll len = strlen(str);
        vector<char> s(str, str+len);
        for(int i=1;i<=x;i++)
        {
            int tmp = s[i-1]-'1';
            if((int)s.size() < x)
            {
                vector<char> sub(s.begin()+i, s.end());
                for(int j=0;j<tmp;j++)
                    s.insert(s.end(), sub.begin(), sub.end());
            }
            len = (len+(len-i)*tmp)%mod;
        }
        printf("%lld\n", (len%mod + mod)%mod);
    }
    return 0;
}

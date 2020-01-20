/************************************************************************
* File Name : c.cpp
* Purpose : 
* Creation Date : 2020年01月20日
* Last Modified : 2020年01月20日 星期一 10时19分30秒
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


int a[maxn], b[maxn];
int cnt;
int main()
{
    int n, q;
    IO;
    cin>>n>>q;
    while(q--)
    {
        int r, c;
        cin>>r>>c;
        if(r==1)
        {
            for(int i=c-1; i<=c+1; i++)
            {
                if(b[i])
                {
                    if(a[c])cnt--;
                    else cnt++;
                }
            }
            a[c] ^= 1;
        }
        else
        {
            for(int i=c-1;i<=c+1;i++)
            {
                if(a[i])
                {
                    if(b[c])cnt--;
                    else cnt++;
                }
            }
            b[c] ^= 1;
        }
        if(!cnt)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}

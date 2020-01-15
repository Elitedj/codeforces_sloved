/************************************************************************
* File Name : a.cpp
* Purpose : 
* Creation Date : 2020年01月15日
* Last Modified : 2020年01月15日 星期三 19时37分26秒
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

int n, d;
bool ok()
{
    int x = (n>>1)+1;
    int ans = x-1 + (d/x)+((d%x)?1:0);
    return (ans<=n);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //int n, d;
        cin>>n>>d;
        if(d<=n || ok())
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}

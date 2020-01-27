/************************************************************************
* File Name : b.cpp
* Purpose : 
* Creation Date : 2020年01月27日
* Last Modified : 2020年01月27日 星期一 12时20分44秒
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



int main()
{
    IO;
    int t;
    cin>>t;
    while(t--)
    {
        ll a, b;
        cin>>a>>b;
        a = abs(a-b);
        if(!a)cout<<"0\n";
        else
        {
            ll sum = 0;
            for(ll i=1;;i++)
            {
                sum += i;
               if(sum>=a && (sum-a)%2==0)
               {
                   cout<<i<<"\n";
                   break;
               }
            }
        }
    }
    return 0;
}

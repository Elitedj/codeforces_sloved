/************************************************************************
* File Name : b.cpp
* Purpose : 
* Creation Date : 2020年01月15日
* Last Modified : 2020年01月15日 星期三 19时38分02秒
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



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a, b;
        cin>>a>>b;
        int cnt = 0;
        ll temp = 0;
        while((temp*10+9)<=b)
        {
            temp = temp*10+9;
            cnt++;
        }
        cout<<cnt*a<<endl;
    }
    return 0;
}

/************************************************************************
* File Name : a.cpp
* Purpose : 
* Creation Date : 2020年01月23日
* Last Modified : 2020年01月23日 星期四 22时37分45秒
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



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3], n;
        for(int i=0;i<3;i++)
            cin>>a[i];
        cin>>n;
        sort(a, a+3);
        n-=(a[2]-a[0]);
        n-=(a[2]-a[1]);
        if(n>=0 &&n%3==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

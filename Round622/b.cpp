/************************************************************************
* File Name : b.cpp
* Purpose : 
* Creation Date : 2020年02月24日
* Last Modified : 2020年02月24日 星期一 22时21分19秒
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
        int n, x, y;
        cin>>n>>x>>y;
        cout<<min(n, max(1, x+y-n+1))<<" "<<min(n, x+y-1)<<"\n";
    }
    return 0;
}

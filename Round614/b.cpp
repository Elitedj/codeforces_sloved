/************************************************************************
* File Name : b.cpp
* Purpose : 
* Creation Date : 2020年01月20日
* Last Modified : 2020年01月20日 星期一 10时18分41秒
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
    double n;
    cin>>n;
    double ans = 0;
    while(n)
    {
        ans += 1.0/n;
        n--;
    }
    printf("%.12f\n", ans);
    return 0;
}

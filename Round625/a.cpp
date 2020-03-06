/************************************************************************
* File Name : a.cpp
* Purpose : 
* Creation Date : 2020年03月06日
* Last Modified : 2020年03月06日 星期五 22时35分10秒
* Created By : Elitedj
************************************************************************/


#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0)
#define DEBUG(i) cout<<"----->"<<(i)<<"\n"
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
const int maxn = 1e5+5;
const int inf = 0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mod = 1e9+7;
const double PI = acos(-1);
 
 
int a[200], b[200];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cin>>b[i];
    int sum1=0, sum2=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]&&b[i]) continue;
        if(a[i])sum1++;
        if(b[i])sum2++;
    }
    if(sum1==0) cout<<"-1\n";
    else cout<<sum2/sum1+1<<"\n";
    return 0;
}

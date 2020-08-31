/************************************************************************
* File Name : oj.cpp
* Purpose : 
* Creation Date : 2019年05月22日
* Last Modified : 2020年08月01日 星期六 15时49分45秒
* Created By : Elite
************************************************************************/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5+5;
 
 
int a[maxn];
int main()
{
    int n, k;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    int l=1, r=1e9;
    while(l < r)
    {
        int m = (l+r)>>1;
        bool ok = false;
        for(int d=0; d<2; d++)
        {
            int cnt = 0;
            for(int i=1;i<=n;i++)
            {
                if(cnt%2!=d || a[i]<=m) cnt++;
            }
            if(cnt>=k) ok = true;
        }
        if(ok) r=m;
        else l=m+1;
    }
    cout<<l<<"\n";
    return 0;
}

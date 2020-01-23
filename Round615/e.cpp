/************************************************************************
* File Name : e.cpp
* Purpose : 
* Creation Date : 2020年01月23日
* Last Modified : 2020年01月23日 星期四 22时39分29秒
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



int n, m;
int main()
{
    IO;
    cin>>n>>m;
    vector<vector<int> > a(n);
    for(int i=0;i<n;i++)
        a[i].resize(m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            a[i][j]--;
        }
    }
    ll ans = 0;
    for(int j=0;j<m;j++)
    {
        vector<int> cnt(n);
        for(int i=0;i<n;i++)
        {
            if(a[i][j]%m==j && a[i][j]/m < n)
            {
                int pos = a[i][j]/m;
                cnt[(i-pos+n)%n]++;
            }
        }
        int tmp = inf;
        for(int k=0;k<n;k++)
            tmp = min(tmp, n-cnt[k]+k);
        ans += tmp;
    }
    cout<<ans<<endl;
    return 0;
}

/************************************************************************
* File Name : e.cpp
* Purpose : 
* Creation Date : 2020年05月13日
* Last Modified : 2020年05月13日 星期三 14时20分41秒
* Created By : Elitedj
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



int main()
{
    IO;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            --a[i];
        }
        int m = 200;
        vector<vector<int> > presum(m, vector<int>(n+1));
        vector<vector<int> > at(m);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                presum[i][j+1] = presum[i][j] + (a[j]==i);
                if(a[j] == i)
                    at[i].push_back(j);
            }
        }
        int ans = 0;
        for(int i=0;i<m;i++)
        {
            int all = presum[i][n];
            ans = max(ans, all);
            for(int len = 1;2*len<=all;len++)
            {
                int be = at[i][len-1];
                int ed = at[i][all-len];
                for(int j=0;j<m;j++)
                {
                    if(i != j)
                        ans = max(ans, 2*len+presum[j][ed] - presum[j][be]);
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}

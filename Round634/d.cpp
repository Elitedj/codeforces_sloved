/************************************************************************
* File Name : d.cpp
* Purpose : 
* Creation Date : 2020年05月13日
* Last Modified : 2020年05月13日 星期三 14时20分23秒
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


char mp[10][10];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=1;i<=9;i++)
            for(int j=1;j<=9;j++)
                cin>>mp[i][j];
        int be = 0;
        for(int i=1;i<=3;i++)
        {
            int j = 0;
            for(j=be+1;j<=be+3;j++)
            {
                //cout<<j<<" "<<(j-1)%3*3+i<<"\n";
                mp[j][(j-1)%3*3+i] = (char)((mp[j][(j-1)%3*3+i]-'0' + 1)%9 + 1 + '0');
            }
            be = j-1;
        }
        for(int i=1;i<=9;i++)
        {
            for(int j=1;j<=9;j++)
                cout<<mp[i][j];
            cout<<"\n";
        }
    }
    return 0;
}

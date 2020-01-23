/************************************************************************
* File Name : d.cpp
* Purpose : 
* Creation Date : 2020年01月23日
* Last Modified : 2020年01月23日 星期四 22时39分05秒
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


int q, x;
int f[maxn];
map<int, int> mp;
int main()
{
    IO;
    cin>>q>>x;
    int ans = 0;
    for(int i=1;i<=q;i++)
    {
        int a;
        cin>>a;
        a = a%x;
        if(f[a])
        {
            int tmp = a;
            a = mp[a] + x;
            if(a<=q)
            {
                mp[tmp] = a;
                f[a] = 1;
                //cout<<"11111:"<<a<<endl;
            }
        }
        else
        {
            f[a] = 1;
            mp[a] = a;
            //cout<<"22222:"<<a<<endl;
        }
        for(int j=ans;j<=i;j++)
            if(!f[j])
            {
                ans = j;
                cout<<ans<<"\n";
                break;
            }
    }
    return 0;
}

/************************************************************************
* File Name : c.cpp
* Purpose : 
* Creation Date : 2020年01月16日
* Last Modified : 2020年01月16日 星期四 20时54分25秒
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

int f[30];
string s;
vector<int> v;
int main()
{
    int n, k;
    cin>>n>>k;
    cin>>s;
    for(int i=1;i<=k;i++)
    {
        char a;
        cin>>a;
        f[a-'a']=1;
    }
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(f[s[i]-'a'])
            cnt++;
        else
        {
            if(cnt)
                v.push_back(cnt);
            cnt = 0;
        }
    }
    if(cnt)v.push_back(cnt);
    ll ans = 0;
    for(auto a : v)
    {
        ans += 1ll*a*(a+1)/2;
    }
    cout<<ans<<endl;
    return 0;
}

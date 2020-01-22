/************************************************************************
* File Name : b.cpp
* Purpose : 
* Creation Date : 2020年01月22日
* Last Modified : 2020年01月22日 星期三 12时50分38秒
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


string s;
int n;
bool nok(int &b, int &w)
{
    for(int i=0;i<n;i++)
    {
        if(s[i]=='W')w++;
        else b++;
    }
    return (w%2 && b%2) ? 1 : 0;
}
vector<int> ans;
int main()
{
    cin>>n;
    cin>>s;
    int b, w;
    w=b=0;
    if(nok(b, w))
    {
        cout<<"-1\n";return 0;
    }
    char g;
    g = (w%2==0) ? 'B' : 'W';
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!=g)
        {
            s[i] ^= 'W'^'B';
            s[i+1] ^= 'W'^'B';
            ans.push_back(i+1);
        }
    }
    cout<<ans.size()<<"\n";
    for(auto v:ans)
        cout<<v<<" ";
    cout<<"\n";
    return 0;
}

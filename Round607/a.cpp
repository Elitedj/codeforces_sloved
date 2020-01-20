/************************************************************************
* File Name : a.cpp
* Purpose : 
* Creation Date : 2020年01月20日
* Last Modified : 2020年01月20日 星期一 13时33分05秒
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
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        int pos = s.length() - 1;
        if(s[pos] == 'o')
            cout<<"FILIPINO"<<endl;
        else if(s[pos] == 'u')
            cout<<"JAPANESE"<<endl;
        else cout<<"KOREAN"<<endl;
    }
    return 0;
}

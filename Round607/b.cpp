/************************************************************************
* File Name : b.cpp
* Purpose : 
* Creation Date : 2020年01月20日
* Last Modified : 2020年01月20日 星期一 13时33分45秒
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
    IO;
    int t;
    cin>>t;
    while(t--)
    {
        string s, c;
        cin>>s>>c;
        if(s<c)
        {
            cout<<s<<"\n";continue;
        }
        string t = s;
        sort(t.begin(), t.end());
        int len = s.length();
        int f = 0;
        for(int i=0;i<len;i++)
        {
            if(s[i]>t[i])
            {
                for(int j=i+1;j<len;j++)
                {
                    swap(s[i], s[j]);
                    if(s<c)
                    {
                        cout<<s<<"\n";
                        f = 1;
                        i=len;
                        break;
                    }
                    swap(s[i], s[j]);
                }
            }
        }
        if(!f)cout<<"---\n";
    }
    return 0;
}

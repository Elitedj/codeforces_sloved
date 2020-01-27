/************************************************************************
* File Name : a.cpp
* Purpose : 
* Creation Date : 2020年01月27日
* Last Modified : 2020年01月27日 星期一 12时20分19秒
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



int main()
{
    IO;
    int t;
    cin>>t;
    while(t--)
    {
        string s, h;
        cin>>s>>h;
        if(h.length() < s.length())
        {
            cout<<"NO\n";
            continue;
        }
        int f = 0;
        string tmp = s;
        sort(tmp.begin(), tmp.end());
        for(int i=0;i<h.length()-s.length()+1;i++)
        {
            string a = h.substr(i, s.length());
            sort(a.begin(), a.end());
            if(a == tmp)
            {
                f=1;break;
            }
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}


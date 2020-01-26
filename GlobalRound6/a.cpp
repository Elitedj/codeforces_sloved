/************************************************************************
* File Name : a.cpp
* Purpose : 
* Creation Date : 2020年01月26日
* Last Modified : 2020年01月26日 星期日 11时39分11秒
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
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sum = 0;
        int f1=0, f2=0;
        for(int i=0;i<(int)s.length();i++)
        {
            sum = (sum + s[i] - '0')%3;
            if(s[i]=='0')
            {
                if(f1)f2=1;
                else f1=1;
            }
            else if((s[i]-'0')%2==0)f2=1;
        }
        cout<<((f1 && f2 && sum%3==0) ? "red" : "cyan")<<"\n";
    }
    return 0;
}

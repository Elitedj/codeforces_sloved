/************************************************************************
* File Name : c.cpp
* Purpose : 
* Creation Date : 2020年03月06日
* Last Modified : 2020年03月06日 星期五 22时35分51秒
* Created By : Elitedj
************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0)
#define DEBUG(i) cout<<"----->"<<(i)<<"\n"
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
    string s;
    cin>>n>>s;
    for(char cur='z';cur>='a';cur--)
    {
        for(int i=0;i<(int)s.size();i++)
        {
            if(s[i]!=cur)continue;
            int f = 0;
            if(i!=0 && s[i-1]==s[i]-1)f=1;
            if(i!=(int)s.size() && s[i+1]==s[i]-1)f=1;
            if(f==1)
            {
                s.erase(s.begin()+i);
                i=-1;
            }
        }
    }
    cout<<n-(int)s.size()<<"\n";
    return 0;
}

/************************************************************************
* File Name : d.cpp
* Purpose : 
* Creation Date : 2020年01月19日
* Last Modified : 2020年01月19日 星期日 20时19分28秒
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



map<string, int> m1, m2;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        m1.clear();
        m2.clear();
        int a, b, c, d;
        a=b=c=d=0;
        for(int i=1;i<=n;i++)
        {
            string str;
            cin>>str;
            char s=str[0], e=str[str.length()-1];
            if(s=='0' && e=='1')
            {
                a++;
                m1[str] = i;
            }
            else if(s=='1' && e=='0')
            {
                b++;
                m2[str] = i;
            }
            else if(s=='1' && e=='1')
                c++;
            else d++;
        }
        if(a==0 && b==0)
        {
            if(c==0 || d==0)cout<<"0\n\n";
            else cout<<"-1\n";
        }
        else if(a==b)
            cout<<"0\n\n";
        else
        {
            vector<int> ans;
            while(abs(a-b)>1)
            {
                if(a>b)
                {
                    for(auto m:m1)
                    {
                        if(a-b<=1)break;
                        string s = m.first;
                        reverse(s.begin(), s.end());
                        if(!m2[s])
                        {
                            a--; b++;
                            ans.push_back(m.second);
                        }
                    }
                }
                else
                {
                    for(auto m:m2)
                    {
                        if(b-a<=1)break;
                        string s = m.first;
                        reverse(s.begin(), s.end());
                        if(!m1[s])
                        {
                            a++; b--;
                            ans.push_back(m.second);
                        }
                    }
                }
            }
            cout<<ans.size()<<"\n";
            for(auto v:ans)
                cout<<v<<" ";
            cout<<"\n";
        }
    }
    return 0;
}

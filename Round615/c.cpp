/************************************************************************
* File Name : c.cpp
* Purpose : 
* Creation Date : 2020年01月23日
* Last Modified : 2020年01月23日 星期四 22时38分42秒
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

vector<int> s;
int main()
{
    IO;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        //int tmp = n;
        s.clear();
        for(int i=2;i*i<=n;i++)
        {
            if(i>1500)break;
            if(n%i==0)
            {
                s.push_back(i);
                n/=i;
                break;
            }
        }
        if(s.size()==0)
        {
            cout<<"NO\n";
            continue;
        }
        for(int i=s[0]+1;i*i<=n;i++)
        {
            if(i>23000)break;
            if(n%i==0)
            {
                s.push_back(i);
                n/=i;
                break;
            }
        }
        if(s.size()==1)
        {
            cout<<"NO\n";
            continue;
        }
        if(n>1 && n!=s[0] && n!=s[1])
        {
            cout<<"YES\n";
            cout<<s[0]<<" "<<s[1]<<" "<<n<<"\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}

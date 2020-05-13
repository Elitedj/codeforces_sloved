/************************************************************************
* File Name : b.cpp
* Purpose : 
* Creation Date : 2020年05月13日
* Last Modified : 2020年05月13日 星期三 14时19分38秒
* Created By : Elitedj
************************************************************************/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<int, int> P;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 1e5+5;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, a, b;
        cin>>n>>a>>b;
        string ans = "";
        for(int i=1;i<=n;i++)
        {
            for(int j=0; (int)ans.length()<n && j<b;j++)
                ans += (char)('a'+j);
            for(int j=b+1;(int)ans.length()<n && j<=a;j++)
                ans += (char)('a'+b-1);
        }
        cout<<ans<<"\n";
    }
    return 0;
}

/************************************************************************
* File Name : a.cpp
* Purpose : 
* Creation Date : 2020年05月13日
* Last Modified : 2020年05月13日 星期三 14时19分22秒
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
        int n;
        cin>>n;
        int ans = n/2 - (n%2==0);
        cout<<max(0, ans)<<"\n";
    }
    return 0;
}

/************************************************************************
* File Name : c.cpp
* Purpose : 
* Creation Date : 2020年05月13日
* Last Modified : 2020年05月13日 星期三 14时19分54秒
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
const int maxn = 2e5+5;


int a[maxn], cnt[maxn];
int main()
{
    IO;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            cnt[i] = 0;
        }
        //sort(a+1, a+n+1);
        int uni = 0, same = 0;
        for(int i=1;i<=n;i++)
        {
            if(cnt[a[i]] == 0) uni++;
            cnt[a[i]]++;
            same = max(same, cnt[a[i]]);
        }
        if(uni == same) cout<<same-1<<"\n";
        else cout<<min(uni, same)<<"\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
typedef pair<int, int> P;
const int maxn = 3e5+5;
const ll mod = 1e9+7;
 
 
set<string> s;
string str[1505];
int main()
{
    int n, k;
    cin>>n>>k;
    ll ans = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>str[i];
        s.insert(str[i]);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            string a = "";
            for(int l=0;l<k;l++)
            {
                if(str[i][l] == str[j][l])
                    a += str[i][l];
                else
                {
                    if(str[i][l]!='S' && str[j][l]!='S')
                        a += 'S';
                    else if(str[i][l]!='E' && str[j][l]!='E')
                        a += 'E';
                    else
                        a += 'T';
                }
            }
            if(s.count(a))ans++;
        }
    }
    cout<<ans/3<<endl;
    return 0;
}

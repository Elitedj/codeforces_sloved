/************************************************************************
* File Name : c.cpp
* Purpose : 
* Creation Date : 2020年01月22日
* Last Modified : 2020年01月22日 星期三 12时51分01秒
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


int one, two, three, four, rx, lx, uy, dy;
int sx, sy;
int n;
int main()
{
    IO;
    cin>>n>>sx>>sy;
    int x, y, cnt;
    for(int i=1;i<=n;i++)
    {
        int a, b;
        cin>>a>>b;
        a-=sx, b-=sy;
        if(a>0 && b>0)one++;
        else if(a==0 && b>0)uy++;
        else if(a<0 && b>0)two++;
        else if(a<0 && b==0)lx++;
        else if(a<0 && b<0)three++;
        else if(a==0 && b<0)dy++;
        else if(a>0 && b<0)four++;
        else rx++;
    }
    cnt = 0;
    if(one+two+uy>cnt)
        cnt=one+two+uy, x=0, y=1;
    if(two+three+lx>cnt)
        cnt=two+three+lx, x=-1, y=0;
    if(three+four+dy>cnt)
        cnt=three+four+dy, x=0, y=-1;
    if(one+four+rx>cnt)
        cnt=one+four+rx, x=1, y=0;
    x+=sx, y+=sy;
    cout<<cnt<<"\n"<<x<<" "<<y<<"\n";
    return 0;
}

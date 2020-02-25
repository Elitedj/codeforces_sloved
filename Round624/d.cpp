/************************************************************************
* File Name : d.cpp
* Purpose : 
* Creation Date : 2020年02月25日
* Last Modified : 2020年02月25日 星期二 15时03分33秒
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
const int maxn = 2e4+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
using namespace std;



int main()
{
	IO;
	int t;
	cin>>t;
	while(t--)
	{
		int a, b, c;
		cin>>a>>b>>c;
		int cnt = inf;
		int aa=a ,bb=b ,cc=c;
		for(int i=1;i<=maxn;i++)
		{
			int tmp = abs(b-i);
			int t1 = inf;
			int tempa;
			for(int j=1;j*j<=i;j++)
			{
				if(i%j==0)
				{
					if(t1 > abs(j-a))
					{
						t1 = abs(j-a);
						tempa = j;
					}
					if(t1 > abs(i/j-a))
					{
						t1 = abs(i/j-a);
						tempa = i/j;
					}
				}
			}
			int t2 = min(abs(c/i*i-c), abs((c/i+1)*i-c));
			tmp += t1 + t2;
			int tempc;
			if(abs(c/i*i-c) < abs((c/i+1)*i-c))
				tempc = c/i*i;
			else
				tempc = (c/i+1)*i;
			if(cnt>tmp)
			{
				cnt = tmp;
				aa = tempa;
				bb = i;
				cc = tempc;
			}
		}
		cout<<cnt<<"\n";
		cout<<aa<<" "<<bb<<" "<<cc<<"\n";
	}
	return 0;
}

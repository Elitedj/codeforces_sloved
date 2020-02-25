/************************************************************************
* File Name : a.cpp
* Purpose : 
* Creation Date : 2020年02月25日
* Last Modified : 2020年02月25日 星期二 15时02分27秒
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
const int maxn = 1e6+5;
const ll mod = 1e9+7;
const double eps = 1e-9;
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a, b;
		cin>>a>>b;
		int ans = 0;
		if(a==b)
		{
			cout<<"0\n";
			continue;
		}
		if(a<b)
		{
			if(a%2 == b%2)
				cout<<"2\n";
			else
				cout<<"1\n";
		}
		else
		{
			if(a%2 == b%2)
				cout<<"1\n";
			else
				cout<<"2\n";
		}
	}
	return 0;
}

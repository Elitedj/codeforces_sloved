#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
typedef pair<ll, ll> P;
const ll mod = 1e9+7;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5+5;
 
 
int t;
 
int a[maxn];
int temp[maxn];
ll sum;
void Merge(int l,int r,int m)
{
    int i=l;
    int j=m+1;
    int k=l;
    while(i<=m&&j<=r)
    {
        if(a[i]>a[j])
        {
            sum+=m-i+1;
            temp[k++]=a[j++];
        }
        else
        {
            temp[k++]=a[i++];
        }
    }
 
    while(i<=m)
    {
        temp[k++]=a[i++];
    }
    while(j<=r)
    {
        temp[k++]=a[j++];
    }
    for(i=l; i<=r; i++)
    {
        a[i]=temp[i];
    }
}
void mergesort(int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(l,mid);
        mergesort(mid+1,r);
        Merge(l,r,mid);
    }
}
 
void slove() {
	int n;
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
	sum = 0;
	mergesort(0, n-1);
	if (sum > 1ll*n*(n-1)/2-1) cout << "NO\n";
	else cout << "YES\n";
}
 
int main() {
	IO;
	t = 1;
	cin >> t;
	while (t--) {
		slove();
	}
}

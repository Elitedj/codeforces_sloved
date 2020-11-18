#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define IO ios::sync_with_stdio(0)
#define DEBUG(x) cout<<"--->"<<(x)<<endl;
const ll mod = 998244353;
const double eps = 1e-9;
const double PI = acos(-1);
const int maxn = 2e5 + 5;
 
int t;
 
int a[105][105];
struct node {
    int x[3], y[3];
};
 
vector<node> ans;
 
void fun1(int i, int j, int cnt) {
    if (cnt == 4) {
        node tmp;
        tmp.x[0] = i, tmp.x[1] = i, tmp.x[2] = i + 1;
        tmp.y[0] = j, tmp.y[1] = j + 1, tmp.y[2] = j;
        ans.push_back(tmp);
        for (int i=0; i<3; i++) {
            a[tmp.x[i]][tmp.y[i]] ^= 1;
        }
 
        tmp.x[0] = i, tmp.x[1] = i, tmp.x[2] = i + 1;
        tmp.y[0] = j, tmp.y[1] = j + 1, tmp.y[2] = j + 1;
        ans.push_back(tmp);
        for (int i=0; i<3; i++) {
            a[tmp.x[i]][tmp.y[i]] ^= 1;
        }
 
        tmp.x[0] = i, tmp.x[1] = i + 1, tmp.x[2] = i + 1;
        tmp.y[0] = j, tmp.y[1] = j + 1, tmp.y[2] = j;
        ans.push_back(tmp);
        for (int i=0; i<3; i++) {
            a[tmp.x[i]][tmp.y[i]] ^= 1;
        }
 
        tmp.x[0] = i + 1, tmp.x[1] = i, tmp.x[2] = i + 1;
        tmp.y[0] = j, tmp.y[1] = j + 1, tmp.y[2] = j + 1;
        ans.push_back(tmp);
        for (int i=0; i<3; i++) {
            a[tmp.x[i]][tmp.y[i]] ^= 1;
        }
    } else if (cnt == 3) {
        int x[3], y[3];
        int tot = 0;
        if (a[i][j]) x[tot] = i, y[tot] = j, tot++;
        if (a[i + 1][j]) x[tot] = i + 1, y[tot] = j, tot++;
        if (a[i][j + 1]) x[tot] = i, y[tot] = j + 1, tot++;
        if (a[i + 1][j + 1]) x[tot] = i + 1, y[tot] = j + 1, tot++;
        node tmp;
        for (int i=0; i<3; i++) {
            tmp.x[i] = x[i];
            tmp.y[i] = y[i];
        }
        ans.push_back(tmp);
        for (int i=0; i<3; i++) {
            a[tmp.x[i]][tmp.y[i]] ^= 1;
        }
    } else if (cnt == 2) {
        int x[3], y[3];
        int tot = 0;
        if (!a[i][j]) x[tot] = i, y[tot] = j, tot++;
        if (!a[i + 1][j]) x[tot] = i + 1, y[tot] = j, tot++;
        if (!a[i][j + 1]) x[tot] = i, y[tot] = j + 1, tot++;
        if (!a[i + 1][j + 1]) x[tot] = i + 1, y[tot] = j + 1, tot++;
 
        int flag = 0;
        if (a[i][j] && !flag) x[tot] = i, y[tot] = j, tot++, flag = 1;
        if (a[i + 1][j] && !flag) x[tot] = i + 1, y[tot] = j, tot++, flag = 1;
        if (a[i][j + 1] && !flag) x[tot] = i, y[tot] = j + 1, tot++, flag = 1;
        if (a[i + 1][j + 1] && !flag) x[tot] = i + 1, y[tot] = j + 1, flag = 1;
 
        node tmp;
        for (int i=0; i<3; i++) {
            tmp.x[i] = x[i];
            tmp.y[i] = y[i];
        }
        ans.push_back(tmp);
        for (int i=0; i<3; i++) {
            a[tmp.x[i]][tmp.y[i]] ^= 1;
        }
 
        tot = 0;
        if (a[i][j]) x[tot] = i, y[tot] = j, tot++;
        if (a[i + 1][j]) x[tot] = i + 1, y[tot] = j, tot++;
        if (a[i][j + 1]) x[tot] = i, y[tot] = j + 1, tot++;
        if (a[i + 1][j + 1]) x[tot] = i + 1, y[tot] = j + 1, tot++;
        for (int i=0; i<3; i++) {
            tmp.x[i] = x[i];
            tmp.y[i] = y[i];
        }
        ans.push_back(tmp);
        for (int i=0; i<3; i++) {
            a[tmp.x[i]][tmp.y[i]] ^= 1;
        }
    } else {
        node tmp;
        if (a[i][j]) {
            tmp.x[0] = i, tmp.y[0] = j;
            tmp.x[1] = i, tmp.y[1] = j + 1;
            tmp.x[2] = i + 1, tmp.y[2] = j + 1;
        } else if (a[i + 1][j]) {
            tmp.x[0] = i + 1, tmp.y[0] = j;
            tmp.x[1] = i, tmp.y[1] = j + 1;
            tmp.x[2] = i + 1, tmp.y[2] = j + 1;
        } else if (a[i][j + 1]) {
            tmp.x[0] = i, tmp.y[0] = j + 1;
            tmp.x[1] = i, tmp.y[1] = j;
            tmp.x[2] = i + 1, tmp.y[2] = j + 1;
        } else {
            tmp.x[0] = i + 1, tmp.y[0] = j + 1;
            tmp.x[1] = i, tmp.y[1] = j + 1;
            tmp.x[2] = i, tmp.y[2] = j;
        }
        ans.push_back(tmp);
        for (int i=0; i<3; i++) {
            a[tmp.x[i]][tmp.y[i]] ^= 1;
        }
 
        int x[3], y[3];
        int tot = 0;
        if (!a[i][j]) x[tot] = i, y[tot] = j, tot++;
        if (!a[i + 1][j]) x[tot] = i + 1, y[tot] = j, tot++;
        if (!a[i][j + 1]) x[tot] = i, y[tot] = j + 1, tot++;
        if (!a[i + 1][j + 1]) x[tot] = i + 1, y[tot] = j + 1, tot++;
 
        int flag = 0;
        if (a[i][j] && !flag) x[tot] = i, y[tot] = j, tot++, flag = 1;
        if (a[i + 1][j] && !flag) x[tot] = i + 1, y[tot] = j, tot++, flag = 1;
        if (a[i][j + 1] && !flag) x[tot] = i, y[tot] = j + 1, tot++, flag = 1;
        if (a[i + 1][j + 1] && !flag) x[tot] = i + 1, y[tot] = j + 1, flag = 1;
 
        for (int i=0; i<3; i++) {
            tmp.x[i] = x[i];
            tmp.y[i] = y[i];
        }
        ans.push_back(tmp);
        for (int i=0; i<3; i++) {
            a[tmp.x[i]][tmp.y[i]] ^= 1;
        }
 
        tot = 0;
        if (a[i][j]) x[tot] = i, y[tot] = j, tot++;
        if (a[i + 1][j]) x[tot] = i + 1, y[tot] = j, tot++;
        if (a[i][j + 1]) x[tot] = i, y[tot] = j + 1, tot++;
        if (a[i + 1][j + 1]) x[tot] = i + 1, y[tot] = j + 1;
        for (int i=0; i<3; i++) {
            tmp.x[i] = x[i];
            tmp.y[i] = y[i];
        }
        ans.push_back(tmp);
        for (int i=0; i<3; i++) {
            a[tmp.x[i]][tmp.y[i]] ^= 1;
        }
    }
    a[i][j] = a[i + 1][j] = a[i][j + 1] = a[i + 1][j + 1] = 0;
}
 
void fun2(int i, int j, int cnt) {
    if (cnt == 6) {
        node tmp;
        tmp.x[0] = i, tmp.x[1] = i, tmp.x[2] = i + 1;
        tmp.y[0] = j, tmp.y[1] = j + 1, tmp.y[2] = j;
        ans.push_back(tmp);
 
        tmp.x[0] = i + 1, tmp.x[1] = i, tmp.x[2] = i + 1;
        tmp.y[0] = j + 1, tmp.y[1] = j + 2, tmp.y[2] = j + 2;
        ans.push_back(tmp);
    } else if (cnt == 5) {
        node tmp;
        int x[3], y[3];
        int tot = 0;
        if (a[i][j]) x[tot] = i, y[tot] = j, tot++;
        if (a[i + 1][j]) x[tot] = i + 1, y[tot] = j, tot++;
        if (a[i][j + 1] && tot<3) x[tot] = i, y[tot] = j + 1, tot++;
        if (a[i + 1][j + 1] && tot<3) x[tot] = i + 1, y[tot] = j + 1, tot++;
        for (int i=0; i<3; i++) {
            tmp.x[i] = x[i];
            tmp.y[i] = y[i];
            if (a[x[i]][y[i]]) cnt--;
            else cnt++;
            a[x[i]][y[i]] ^= 1;
        }
        ans.push_back(tmp);
        fun1(i, j + 1, cnt);
    } else if (cnt == 4) {
        if (a[i][j] == 0 && a[i + 1][j] == 0) fun1(i, j + 1, cnt);
        else {
            int x[3], y[3];
            int tot = 0;
            if (a[i][j]) x[tot] = i, y[tot] = j, tot++;
            if (a[i + 1][j]) x[tot] = i + 1, y[tot] = j, tot++;
            if (tot < 3) x[tot] = i, y[tot] = j + 1, tot++;
            if (tot < 3) x[tot] = i + 1, y[tot] = j + 1, tot++;
            node tmp;
            for (int i=0; i<3; i++) {
                tmp.x[i] = x[i];
                tmp.y[i] = y[i];
                if (a[x[i]][y[i]]) cnt--;
                else cnt++;
                a[x[i]][y[i]] ^= 1;
            }
            ans.push_back(tmp);
            fun1(i, j + 1, cnt);
        }
    } else if (cnt == 3) {
        int sum = 0;
        for (int k=i; k<=i+1; k++) {
            for (int kk=j; kk<=j+1; kk++) {
                if (a[k][kk]) sum++;
            }
        }
        if (sum == 3) {
            fun1(i, j, 3);
            return;
        }
 
        sum = 0;
        for (int k=i; k<=i+1; k++) {
            for (int kk=j+1; kk<=j+2; kk++) {
                if (a[k][kk]) sum++;
            }
        }
        if (sum == 3) {
            fun1(i, j+1, 3);
            return;
        }
        int x[3], y[3];
        int tot = 0;
        if (a[i][j]) x[tot] = i, y[tot] = j, tot++;
        if (a[i + 1][j]) x[tot] = i + 1, y[tot] = j, tot++;
        if (tot<3) x[tot] = i, y[tot] = j + 1, tot++;
        if (tot<3) x[tot] = i + 1, y[tot] = j + 1, tot++;
        node tmp;
        for (int i=0; i<3; i++) {
            tmp.x[i] = x[i];
            tmp.y[i] = y[i];
            if (a[x[i]][y[i]]) cnt--;
            else cnt++;
            a[x[i]][y[i]] ^= 1;
        }
        ans.push_back(tmp);
        fun1(i, j + 1, cnt);
    } else if (cnt == 2) {
        if (a[i][j] + a[i + 1][j] == 0) fun1(i, j + 1, 2);
        else if (a[i][j + 2] + a[i + 1][j + 2] == 0) fun1(i, j, 2);
        else {
            int x[3], y[3];
            int tot = 0;
            if (a[i][j]) x[tot] = i, y[tot] = j, tot++;
            if (a[i + 1][j]) x[tot] = i + 1, y[tot] = j, tot++;
            if (tot<3) x[tot] = i, y[tot] = j + 1, tot++;
            if (tot<3) x[tot] = i + 1, y[tot] = j + 1, tot++;
            node tmp;
            for (int i=0; i<3; i++) {
                tmp.x[i] = x[i];
                tmp.y[i] = y[i];
                if (a[x[i]][y[i]] == 1) cnt--;
                else cnt++;
                a[x[i]][y[i]] ^= 1;
            }
            ans.push_back(tmp);
            fun2(i, j + 1, cnt);
        }
    } else if (cnt == 1) {
        if (a[i][j] || a[i + 1][j]) fun1(i, j, 1);
        else fun1(i, j + 1, 1);
    }
    for (int k=i; k<=i+1; k++) {
        for (int kk=j; kk<=j+2; kk++) {
            a[k][kk] = 0;
        }
    }
}
 
void slove() {
    int n, m;
    cin >> n >> m;
    ans.clear();
    for (int i=1; i<=n; i++) {
        for (int j=1; j<= m; j++) {
            char ch;
            cin >> ch;
            a[i][j] = ch - '0';
        }
    }
    int rev = 0;
    if (n > m) {
        int b[105][105];
        swap(n, m);
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                b[i][j] = a[j][i];
            }
        }
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                a[i][j] = b[i][j];
            }
        }
        rev = 1;
    }
    for (int i=1; i<=n; i+=2) {
        if (i + 1 > n) i--;
        for (int j=1; j<=m; j+=3) {
            int l = j, r = min(m, j+2);
            int cnt = 0;
            for (int k=i; k<=i+1; k++) {
                for (int kk=l; kk<=r; kk++) {
                    if (a[k][kk]) cnt++;
                }
            }
            if (cnt == 0) continue;
            if (l == r) {
                fun1(i, j-1, cnt);
            } else if (l + 1 == r) {
                fun1(i, l, cnt);
            } else {
                fun2(i, l, cnt);
            }
        }
    }
            
    cout << ans.size() << '\n';
    for (auto v:ans) {
        for (int i=0; i<3; i++) {
            if (!rev) cout << v.x[i] << ' ' << v.y[i] << ' ';
            else cout << v.y[i] << ' ' << v.x[i] << ' ';
        }
        cout << '\n';
    }
}
 
int main() {
    // freopen("in.txt", "r", stdin);
    IO;
    t = 1;
    cin >> t;
    while (t--) slove();
    return 0;
}

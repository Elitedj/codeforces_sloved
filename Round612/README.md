### 地址
[Round612](https://codeforces.com/contest/1287)

### A
从后往前寻找最长的连续P串的长度，且P串前面要有A

### B
n^2枚举，对于任意两个牌，符合条件的第三个牌是一定的，可以构造出来然后查询

### C
dp  
dp[i][j][k]三个维度分别表示当前长度、剩余偶数个数、当前数字的奇偶性  
转移方程看代码

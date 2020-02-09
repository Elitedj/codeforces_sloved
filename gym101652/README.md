### 地址
[gym101652](https://codeforces.com/gym/101652)

### Odd Palindrome
偶数长度的回文串必然有相邻的相同字母，所以判断一下是否有两个相邻字母相同即可

### Latin Squares
这题是多组输入，但题目没说，根据题意模拟即可

### Halfway
有两种做法  
第一种是二分  
第二种是直接暴力找，不会超时

### Star Arrangements
也是暴力找即可

### Delayed Work
两种做法  
一种是根据基本不等式a+b >= 2\*sqrt(a\*b)来计算，当a==b时取等号，根据题目列出式子求出m，求出的m可能为小数，但是m必须为整数，强制转换一下类型，让m-1、m、m+1都算一次费用，看看哪个少  
第二种是根据对勾函数来做，m从1开始，一个循环不断m++，只要当前花费比上一次的小就继续循环，否则就break。因为对勾函数是先递减后递增的

### Forbidden Zero
暴力找后面的数，且数字不包含0即可

### Unloaded Die
若当前期望为3.5则不需要改变骰子的数字  
否则挑一个概率最大的面去改变

### Purple Rain
连续子区间最大和

### Fear Factoring
除法分块板子题

### Straight Shot
将robot的速度拆分成Vx和Vy  
若robot想从(0, 0)到达(x, 0)  
robot在y轴方向上的移动距离和moving sidewalk的移动距离相同  
即(r1-l1)/Vx\*v1 + (r2-l2)/Vx\*v2 + ... + (rn-ln)/Vx\*vn == Vy\*x/Vx  
把Vx消掉，可以求出Vy  
若Vy >= V，则Too hard，因为这样水平方向没速度  
若x/Vx >= 2.0\*x/v则也是Too hard

### Grid Coloring
can[i][j]表示grid[i][j]能否不受现有颜色的影响涂B颜色  
dp[i][j]表示第i行前j个都是B其余都是R的方案数  
dp[i][j] = sum(dp[i-1][k] k in [j, m])  
因为第i行的前j个涂B的话，则只有上一行的前j...m个涂B的方案数才满足条件

### Security Badge
每一条边都有一个权值区间，只有当前id在这个区间内才可以走这条边，问有多少个id能从s到达t  
我们对每个边的权值区间改为左闭右开，即[l, r]变为[l, r+1)  
然后对端点值离散化后暴力dfs  

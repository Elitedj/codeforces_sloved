### 地址
[Hello2020](https://codeforces.com/contest/1284)

### A
水题

### B
用总数减去不满足条件的情况  
对于一个没有递增的序列，记录下它的头和尾，然后对这两个数组排序  
不满足的情况为头小于等于尾，累计和  

### C
对于1到n的所有全排列，计算区间[L, R]中MAX-MIN=R-L+1的区间数量  
如果暴力去求的话实在是。。。很麻烦且慢  
我们考虑固定区间，变化序列的方式  
对于满足条件的区间[L, R]来说，这个区间有(R-L+1)!种排列的方式，那么剩余的N-LEN+1的数字呢就有(N-LEN+1)!种排列方式，且长度为N的序列共有(N-LEN+1)个这样的区间  
我们提前将阶乘计算出来，然后LEN从1~n变化即可

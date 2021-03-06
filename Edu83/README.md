### 地址
[Edu83](https://codeforces.com/contest/1312)

### A
有一个正n边形，问能不能用这n个点构造出正m边形  
显然当n%m==0时是可以的

### B
给定一个数组，要重新排序使得这个数组不存在任意的i<j且i-ai==j-aj  
将原数组排序后reverse即可

### C
你有一个长度为n的数组，初始化全为0，你能够执行无数次以下操作(操作是有序号的，从0开始，记为i)  
可以将任意一个位置的数字加上k^i，也可以跳过这一步。  
问能否通过操作将数组变为题目给定的数组  
显然，将每一个数字转化成k进制，若每一位都为1或0(即代表加了k^i或者不加k^i)，且这些数字没有相同的k进制位为1，因为k^i只能加一次，若有多个数字需要加上k^i，显然不行

### D
你有1~m的数字，你需要构造满足下面条件的数组  
- 这个数组有n个数字  
- 有一对数字是相同的
- 要有一个位置i，满足j<i时aj<ai，j>i时，ai>aj  
问有多少种方法  

公式：C(m, n-1)\*(n-2)\*(2^(n-3))  
因为有一对数字相同，所以能要从m中选n-1个数字  
显然，相同的数字不能是最大的那个数字，所以要从剩下的n-2个数字选重复的  
然后两个相同的数字肯定是在最大值的两边，排除掉这3个数字还剩下n-3个数字  
若最大值左边有0个数字，即C(n-3, 0)  
若最大值左边有1个数字，即C(n-3, 1)  
...  
即C(n-3, 0)+C(n-3, 1)+C(n-3, 2)+...+C(n-3, n-3)  
这个累加和为(2^(n-3))  
然后是乘法原理，所以最后得到上面的公式

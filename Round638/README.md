### 地址
[Round638](https://codeforces.com/contest/1348)

### A
贪心水题

### B
贪心构造

### C
找规律

### D
肯定不会有-1的情况，因为一直不分裂，每晚增加1重量，肯定可以到达n  
假设最少需要k天，那么这k天最多可以达到2^k-1的重量，即1，2，4，8，16......  
先贪心的增加2，4，8，16......  
然后剩余的部分不足2的x次方，则放入到某两天之间去，然后排序做一个差分

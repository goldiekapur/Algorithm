801. Backpack X
You have a total of n yuan. Merchant has three merchandises and their prices are 150 yuan, 250 yuan and 350 yuan. And the number of these merchandises can be considered as infinite. After the purchase of goods need to be the remaining money to the businessman as a tip, finding the minimum tip for the merchant.

Example
Example 1:

Input: n = 900
Output: 0
Example 2:

Input: n = 800
Output: 0

经典的完全背包例题。
解法1：最朴素的2维数组
注意：
1) 完全背包和01背包的区别就是转移方程里面，
f[i][w] = max{f[i-1][w], f[**i-1**][w-Ai-1] + Vi-1 | w≥Ai-1 且f[i-1][w-Ai-1] ≠-1}      //01背包
f[i][w] = max{f[i-1][w], f[**i**][w-Ai-1] + Vi-1}  //完全背包
i-1和i的区别。

2) **完全背包和01背包都只需要2重循环，优化也只是空间优化而已。
多重背包需要3重循环(不管优不优化)，优化也只是空间优化。**
3) j=0和j=1开始都可以。
4) i和j两层循环顺序可互换。

解法2：
空间优化后2层循环，一重数组。
注意：
1) 01背包空间优化内循环反序，完全背包空间优化内循环正序。
1393. Friends Of Appropriate Ages

Some people will make friend requests. The list of their ages is given and ages[i] is the age of the ith person.

Person A will NOT friend request person B (B != A) if any of the following conditions are true:

age[B] <= 0.5 * age[A] + 7
age[B] > age[A]
age[B] > 100 && age[A] < 100
Otherwise, A will friend request B.
Note that if A requests B, B does not necessarily request A. Also, people will not friend request themselves.

How many total friend requests are made?

Example
Example 1:

Input: [16,16]
Output: 2
Explanation: 2 people friend request each other.
Example 2:

Input: [16,17,18]
Output: 2
Explanation: Friend requests are made 17 -> 16, 18 -> 17.
Example 3:

Input: [20,30,100,110,120]
Output: 3
Explanation: Friend requests are made 110 -> 100, 120 -> 110, 120 -> 100.
Notice
1 <= ages.length <= 20000.
1 <= ages[i] <= 120.

解法1：
注意这题的两个条件
age[B] > age[A]
age[B] > 100 && age[A] < 100
有冗余。用age[B] > age[A]一个条件就可以了。

我想的解法比较慢。时间复杂度O(n^2)。刚刚勉强过。

解法2：
参考的网上的答案。时间复杂度仅为O(K^2)，K为unique的年龄个数。
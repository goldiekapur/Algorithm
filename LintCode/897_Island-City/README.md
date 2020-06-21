897. Island City

Given a matrix of size n x m, the elements in the matrix are 0、1、2. 0 for the sea, 1 for the island, and 2 for the city on the island(You can assume that 2 is built on 1, ie 2 also represents the island).
If two 1 are adjacent, then these two 1 belong to the same island. Find the number of islands with at least one city.

Example
Example1

Input: 
[
[1,1,0,0,0],
[0,1,0,0,1],
[0,0,0,1,1],
[0,0,0,0,0],
[0,0,0,0,1]
]
Output: 0
Explanation:
There are 3 islands, but none of them contain cities.
Example2

Input: 
[
[1,1,0,0,0],
[0,1,0,0,1],
[0,0,2,1,2],
[0,0,0,0,0],
[0,0,0,0,2]
]
Output: 2
Explanation:
There are 3 islands, and two of them have cities.
Notice
We only consider up, down, left and right as adjacent.
n <= 100，m <= 100.
You can assume that the four sides of the matrix are surrounded by the sea.

202. Segment Tree Query
中文English
For an integer array (index from 0 to n-1, where n is the size of this array), in the corresponding SegmentTree, each node stores an extra attribute max to denote the maximum number in the interval of the array (index from start to end).

Design a query method with three parameters root, start and end, find the maximum number in the interval [start, end] by the given root of segment tree.

Example
For array [1, 4, 2, 3], the corresponding Segment Tree is:

                  [0, 3, max=4]
                 /             \
          [0,1,max=4]        [2,3,max=3]
          /         \        /         \
   [0,0,max=1] [1,1,max=4] [2,2,max=2], [3,3,max=3]
Input：query(root, 1, 1),  Output：4

Input：query(root, 1, 2),  Output：4

Input：query(root, 2, 3),  Output：5

Input：query(root, 0, 2),  Output：4
Notice
It is much easier to understand this problem if you finished Segment Tree Build first.


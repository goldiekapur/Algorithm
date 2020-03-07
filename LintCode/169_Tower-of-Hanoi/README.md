169. Tower of Hanoi
中文English
Tower of Hanoi problem, is a well-known problem. On the A, B, C three pillars, there are n disks of different sizes (radii 1-n), they are stacked in a start on A, your goal is to a minimum number of legal steps to move all the plates move from A to C tower tower.
Each step in the rules of the game are as follows:

Each step is only allowed to move a plate (from the top of one pillars to the top of another pillars)
The process of moving, you must ensure that a large dish is not at the top of the small plates (small can be placed on top of a large, below the maximum plate size can not have any other dish)
Diagram:
hanoi

Example
Example 1:

Input:n = 2
Output: ["from A to B","from A to C","from B to C"]
Example 2:

Input:n = 3
Output:["from A to C","from A to B","from C to B","from A to C","from B to A","from B to C","from A to C"]

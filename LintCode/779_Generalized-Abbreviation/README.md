779. Generalized Abbreviation

Write a function to generate the generalized abbreviations of a word.(order does not matter)

Example
Example 1:

Input: 
word = "word", 
Output: 
["word", "1ord", "w1rd", "wo1d", "wor1", "2rd", "w2d", "wo2", "1o1d", "1or1", "w1r1", "1o2", "2r1", "3d", "w3", "4"]
Example 2:

Input:
word = "today"
Output:
["1o1a1","1o1ay","1o2y","1o3","1od1y","1od2","1oda1","1oday","2d1y","2d2","2da1","2day","3a1","3ay","4y","5","t1d1y","t1d2","t1da1","t1day","t2a1","t2ay","t3y","t4","to1a1","to1ay","to2y","to3","tod1y","tod2","toda1","today"]

解法1：
DFS。
注意不用担心结果重复问题。
Example 1:
input = "aaaa"
output = ["1a1a","1a2","1aa1","1aaa","2a1","2aa","3a","4","a1a1","a1aa","a2a","a3","aa1a","aa2","aaa1"]
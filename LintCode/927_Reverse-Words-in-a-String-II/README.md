927. Reverse Words in a String II
Given an input character array, reverse the array word by word. A word is defined as a sequence of non-space characters.

The input character array does not contain leading or trailing spaces and the words are always separated by a single space.

Example
Given s = "the sky is blue",
after reversing : "blue is sky the"

Challenge
Could you do it in-place without allocating extra space?

Solution:
See the .cpp file.
Note str.find(' ', endPos + 1) can specify the starting searching position.
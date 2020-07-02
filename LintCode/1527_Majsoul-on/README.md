1527. Majsoul on !

According to a mahjong game called bird soul, simplified the rules of the game, as follows:

There are 36 cards in total, and each card is 1-9.And each number has four cards.

If 14 cards are taken out and the following conditions are satisfied, that is to win in mahjong:

Two of the 14 cards have the same number of cards, known as the Sparrow head.
Remove the above 2 cards, the remaining 12 cards can form 4 shunzi or kezi.
Note: shunzi means an increasing number of three consecutive characters (e.g. 234,567), and an kezi means three characters of the same number (e.g. 111,777).

You draw 13 cards out of 36 cards, and then you take another card out of the remaining 23 cards, and what kind of number cards can you draw with?

Example
Example 1:

Input: 
[1, 1, 1, 2, 2, 2, 5, 5, 5, 6, 6, 6, 9]
Output: 
[9]
Explanation：
It can be made up of four kezi of 1,2,5,6 and a head of a sparrow of 9.
Example 2:

Input: 
[1, 1, 1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 9]
Output: 
[4, 7]
Explanation：
It can be made up of (123), (123), (567) and (456) or (789), and a head of a sparrow of 1.
Notice
If there are multiple cards that satisfied the conditions, please return them in the order from smallest to largest. If no card satisfied return 0.


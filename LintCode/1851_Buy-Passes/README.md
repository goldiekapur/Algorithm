1851. Buy Passes
中文English
Alex plans on visiting the museum and is at the counter to purchase passes for the same. The administrators have decided not to sell group passes, and are providing only one pass at a time. If a visitor needs more than one pass, he/she has to pass through the queue again to reach the counter and buy the next pass, Alex wants to buy many passe.Considering that the visitors and number of passes each visitor needs is known, how much time does Alex require to buy all passes?Alex's place in the queue to the counter will be given, and each transaction takes 1 unit of time. The time needed to go to the back of the line each time can be ignored.

Example
Example 1:

Input:arr=[1,2,5],k=1
Output:4
Explanation:
There is three persons.0,1,2.Alex is 1.
at 1 time,0(1)<-1(2)<-2(5).people 0 gets one pass.
at 2 time,1(2)<-2(5) Alex gets one pass,and he goes to the back of the line.
at 3 time,2(5)<-1(1),people 2 gets one pass,and he goes to the back of the line.
at 4 time,1(1)<-2(4),Alex gets one pass. Alex  buys all passes.
Example 2:

Input:arr=[3,2,1], k = 0,
Output:6
Notice
|arr|<=100000
arr[i]<=10000

解法1：
这道题其实是道数学题。分3种情况：
排在Alex前面的人如果买的票比Alex多，那么Alex买完票的时候这些人买的票应该和Alex买的票一样。
排在Alex后面的人如果买的票比Alex多，那么Alex买完票的时候这些人买的票应该比Alex买的票少一张。
其他的人就是那些买票比Alex少的，不管是排在Alex前面还是Alex后面，Alex买完票的时候他们的票也会买完。

解法2：
我一开始想的笨解法。就一轮一轮的来，但是最后大数据会超时。
但这种解法也有很多tricky。注意k和n都会变，应该事先把它们保存下来。
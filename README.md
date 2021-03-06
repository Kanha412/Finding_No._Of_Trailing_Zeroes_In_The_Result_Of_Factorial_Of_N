# Finding No. Of Trailing Zeroes In The Result Of Factorial Of N
<h3>A Simple Yet Confusing Programming Question! - <i>Write A Program To Find The Trailing Zeroes In The Result Of Factorial Of N ??</i></h3>
<b><p>Trailing Zeroes :- After result of factorial, the zeroes at the end are called trailing zeroes of factorial.</p></b>
<p>We can't find a factorial's result first and then count its trailing zeroes because factorials' answers can be a very huge number of digits and it may result in overflowing. And then counting the trailing zeroes may lead to a large Time Complexity. Hence, we have to use a different style to solve this problem.</p>
<h3>Programming Languages Used To Solve This Problem :- Both C and C++ <i>(But Can be Understand By Any Language Users)</i></h3>
<hr>
<h3>Constraints:</h3>
<h3><i>N≥0</i></h3>
<hr><b>Input 1:</b>
<p>Enter N: 5</p>
<b>Output 1:</b>
<p>Trailing Zeroes in the result of 5! is '1'</p>
<b>Explanation 1:</b>
<p>For N=5, 5! = 120. So it has one trailing zero. Therefore, answer is 1.</p>
<hr><b>Input 2:</b>
<p>Enter N: 12</p>
<b>Output 2:</b>
<p>Trailing Zeroes in the result of 12! is '2'</p>
<b>Explanation 2:</b>
<p>For N=12, 12! = 479001600. So it has two trailing zeroes. Therefore, answer is 2.</p>
<hr><b>Input 3:</b>
<p>Enter N: 4</p>
<b>Output 3:</b>
<p>Trailing Zeroes in the result of 4! is '0'</p>
<b>Explanation 3:</b>
<p>For N=4, 4! = 24. So it has no trailing zeroes. Therefore, answer is 0.</p>
<hr>
<b>Input 4:</b>
<p>Enter N: 0</p>
<b>Output 4:</b>
<p>Trailing Zeroes in the result of 0! is '0'</p>
<b>Explanation 4:</b>
<p>For N=0, 0! = 1. So it has no trailing zeroes. Therefore, answer is 0.</p>
<hr>
<p>Hence, Here is the most optimized solution of this programming question with <b>Time Complexity :- log(N).</b></p>

# 2244C - Stepan and Permutation

**Rating:** 1100
**Tags:** constructive algorithms, dfs and similar, dsu, greedy, math, number theory, sortings
**Problem link:** https://codeforces.com/contest/2244/problem/C

---

C. Stepan and Permutationtime limit per test2 secondsmemory limit per test256 megabytesinputstandard inputoutputstandard outputStepan found a permutation $$$p$$$ of length $$$n$$$. Of course, he decided to sort it. To make the process more interesting, he chose two positive integers $$$x$$$ and $$$y$$$ $$$(x + y \le n)$$$ and defined a rule for swapping elements.

In one move, Stepan can choose two indices $$$i$$$ and $$$j$$$ $$$(1 \le i, j \le n)$$$ and swap the elements $$$p_i$$$ and $$$p_j$$$ if at least one of the following conditions holds:

  $$$|i - j| = x$$$  $$$|i - j| = y$$$ Stepan wants to know whether it is possible to sort the permutation in ascending order using any number of such operations. Help him answer this question.

InputThe first line contains a single integer $$$t$$$ $$$(1 \le t \le 10^4)$$$ — the number of test cases.

The first line of each test case contains three integers $$$n$$$, $$$x$$$, and $$$y$$$ $$$(1 \le x, y \le n \le 2 \cdot 10^5$$$, $$$x + y \le n)$$$ — the length of the array and the numbers chosen by Stepan.

The second line of each test case contains $$$n$$$ integers $$$p_i$$$ $$$(1 \le p_i \le n)$$$ — the array $$$p$$$; it is guaranteed that $$$p$$$ is a permutation.

It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.

OutputFor each test case, output &quot;YES&quot; if it is possible to sort the permutation with the given $$$x$$$ and $$$y$$$, and &quot;NO&quot; otherwise.

You may output each letter in any case (lowercase or uppercase). For example, the strings &quot;yEs&quot;, &quot;yes&quot;, &quot;Yes&quot;, and &quot;YES&quot; will be accepted.

ExampleInput
45 2 35 4 3 2 16 2 42 1 4 3 6 54 2 21 2 3 45 2 31 2 3 5 4Output
YESNOYESYES

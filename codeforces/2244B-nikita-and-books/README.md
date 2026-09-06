# 2244B - Nikita and Books

**Rating:** 800
**Tags:** greedy, math, sortings
**Problem link:** https://codeforces.com/contest/2244/problem/B

---

B. Nikita and Bookstime limit per test1 secondmemory limit per test256 megabytesinputstandard inputoutputstandard outputAs is well known, Nikita loves reading. Today, he made a mess in his room and arranged his books into $$$n$$$ stacks in a row, numbered from $$$1$$$ to $$$n$$$ from left to right. The $$$i$$$-th stack contains $$$a_i$$$ books. This arrangement is called neat if, in every stack except the rightmost one, the number of books is strictly less than in the stack to its right; that is, the array $$$a$$$ is strictly increasing.

Yura wants to make the arrangement neat by performing the following operation any number of times:

  Choose a stack $$$i$$$ such that $$$1 \le i  \lt  n$$$ and $$$a_i  \gt  1$$$.  Take $$$1$$$ book from the top of stack $$$i$$$, so $$$a_i$$$ decreases by $$$1$$$.  Put this book on top of stack $$$i + 1$$$, so $$$a_{i+1}$$$ increases by $$$1$$$. Determine whether Yura can make the arrangement neat.

InputThe first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.

The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of stacks.

The second line of each test case contains $$$n$$$ integers $$$a_i$$$ ($$$1 \le a_i \le 10^9$$$) — the initial number of books in each stack.

It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.

OutputFor each test case, output &quot;YES&quot; if Yura can make the arrangement neat, and &quot;NO&quot; otherwise.

You may output each letter in any case (lowercase or uppercase). For example, the strings &quot;yEs&quot;, &quot;yes&quot;, &quot;Yes&quot;, and &quot;YES&quot; will be accepted.

ExampleInput
731 2 331 1 2310 1 132 2 241 4 2 258 2 8 1 841 1 3 5Output
YESNOYESYESNOYESNO

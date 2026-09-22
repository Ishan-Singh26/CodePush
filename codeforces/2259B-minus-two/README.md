# 2259B - Minus Two

**Rating:** 800
**Tags:** math, number theory
**Problem link:** https://codeforces.com/contest/2259/problem/B

---

B. Minus Twotime limit per test2 secondsmemory limit per test256 megabytesinputstandard inputoutputstandard outputYou are given an array $$$a_1, a_2, \ldots, a_n$$$. You may perform the following operation: 

  For all indices $$$i$$$ ($$$1 \leq i \leq n$$$), set $$$a_i = |a_i - 2|$$$. Find the maximum possible frequency of any integer in $$$a$$$ after performing the operation an arbitrary number (possibly zero) of times.

InputThe first line of each input contains an integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.

The first line of each test case contains an integer $$$n$$$ ($$$1 \leq n \leq 2 \cdot 10^5$$$) — the length of $$$a$$$.

The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \leq 10^9$$$) — the array $$$a$$$.

It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.

OutputFor each test case, output a single integer denoting the maximum possible frequency of any integer in $$$a$$$ after performing the operation an arbitrary number of times.

ExampleInput
521 341 1 1 236 7 842 2 2 251 10 100 1000 100000Output
23143NoteIn the first test case, we can perform the operation once to have $$$a = [|1 - 2|, |3 - 2|] = [1, 1]$$$, which means the maximum possible frequency of any integer in $$$a$$$ is $$$2$$$.

In the second test case, the maximum frequency of an integer in $$$a$$$ is $$$3$$$. It can be shown that, no matter how many operations we perform, the maximum possible frequency of an integer in $$$a$$$ will never exceed $$$3$$$.

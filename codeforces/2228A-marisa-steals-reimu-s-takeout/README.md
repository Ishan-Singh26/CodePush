# 2228A - Marisa Steals Reimu's Takeout

**Rating:** 800
**Tags:** greedy, implementation
**Problem link:** https://codeforces.com/contest/2228/problem/A

---

A. Marisa Steals Reimu's Takeouttime limit per test1 secondmemory limit per test256 megabytesinputstandard inputoutputstandard output 

The Darkness Brought In by Swallowstone Naturalis Historia— Dateless Bar &quot;Old Adam&quot;Marisa is a girl of integrity who always helps others safeguard their belongings. Over a period of $$$n$$$ days, she comes each day to take one of Reimu's takeouts. The $$$i$$$-th takeout is described by its deliciousness value — an integer $$$w_i$$$ ($$$0\le w_i\le 2$$$), forming a sequence $$$w$$$ of length $$$n$$$.

Marisa has a special fondness for the number $$$3$$$. She can perform the following operation zero or more times: 

  Select a non-empty subsequence$$$^{\text{∗}}$$$ of $$$w$$$ whose sum is divisible by $$$3$$$, and remove the elements of the subsequence from $$$w$$$. Determine the maximum number of operations Marisa can perform.

$$$^{\text{∗}}$$$A sequence $$$a$$$ is a subsequence of a sequence $$$b$$$ if $$$a$$$ can be obtained from $$$b$$$ by the deletion of several (possibly, zero or all) element from arbitrary positions. 

InputEach test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 500$$$). The description of the test cases follows. 

The first line of each test case contains a single integer $$$n$$$ ($$$1\le n \le 100$$$).

The second line contains $$$n$$$ integers $$$w_1, w_2, \ldots, w_n$$$ ($$$0\leq w_i \leq 2$$$), denoting the deliciousness values of the takeouts.

OutputFor each test case, output the maximum number of operations Marisa can perform.

ExampleInput
340 0 0 031 2 051 2 1 2 1Output
422NoteIn the first test case, Marisa can perform four operations: $$$$$$[\underline{0},0,0,0]\to[\underline{0},0,0]\to[\underline{0},0]\to[\underline{0}]\to [].$$$$$$

In the second test case, Marisa can perform two operations: $$$$$$[\underline{1},\underline{2},0]- \gt [\underline{0}]- \gt [].$$$$$$

In the third test case, Marisa can perform two operations: $$$$$$[\underline{1},2,1,\underline{2},1]- \gt [\underline{2},1,\underline{1}]- \gt [1].$$$$$$

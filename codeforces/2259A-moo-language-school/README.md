# 2259A - Moo Language School

**Rating:** 800
**Tags:** brute force, greedy, two pointers
**Problem link:** https://codeforces.com/contest/2259/problem/A

---

A. Moo Language Schooltime limit per test1 secondmemory limit per test256 megabytesinputstandard inputoutputstandard outputFarmer John is trying to increase literacy rates in the United Cows of Farmer John (UCFJ). The UCFJ consists of $$$n$$$ fields and $$$\frac{n}{k}$$$ farms (where $$$n$$$ is a multiple of $$$k$$$), with each farm consisting of $$$k$$$ consecutive fields. In other words, the $$$i$$$-th field is in the $$$\lceil \frac{i}{k} \rceil$$$-th farm: Fields $$$1, 2, \ldots, k$$$ are in the first farm, fields $$$k+1, k+2, \ldots, 2k$$$ are in the second farm, etc.

Farmer John wants to build schools such that each farm has at least one school. However, some fields are owned by Farmer Nhoj, who will charge Farmer John extra to build a school there. Farmer John wants to know the minimum number of times that he would have to build a school on Farmer Nhoj's land in order to ensure that each farm has at least one school.

InputThe first line of each input contains an integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.

The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \leq k \leq n \leq 20$$$, $$$n$$$ is a multiple of $$$k$$$) — the number of fields and size of each farm.

The second line of each test case contains a binary string $$$s$$$ of length $$$n$$$ — the fields owned by Farmer Nhoj. If $$$s_i = 1$$$, the $$$i$$$-th field is owned by Farmer Nhoj. If $$$s_i = 0$$$, the $$$i$$$-th field is not owned by Farmer Nhoj.

OutputFor each test case, output a single integer — the minimum number of times that Farmer John must build a school on Farmer Nhoj's land.

ExampleInput
68 2100111005 1111118 4011111105 1001014 411014 41111Output
150201NoteFor the first test case, we can build a school on the $$$2$$$nd, $$$3$$$rd, $$$5$$$th, and $$$7$$$th fields, and of those, only the $$$5$$$th field is owned by Farmer Nhoj, meaning our answer is $$$1$$$. It can be shown that this is the best possible answer.

For the second test case, Farmer Nhoj owns every field, and since we have to build $$$5$$$ schools, we must build on Farmer Nhoj's land $$$5$$$ times.

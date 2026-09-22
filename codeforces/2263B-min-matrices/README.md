# 2263B - Min Matrices

**Rating:** 900
**Tags:** constructive algorithms
**Problem link:** https://codeforces.com/contest/2263/problem/B

---

B. Min Matricestime limit per test1.5 secondsmemory limit per test256 megabytesinputstandard inputoutputstandard output 

Farmer John heard from Elsie that Bessie's favorite number is $$$k$$$, so he wants to surprise her with a handcrafted present.

For a 2D matrix $$$B$$$, let $$$f(B)$$$ denote the set of the minimum element of each row and each column of $$$B$$$.

Farmer John wants you to show him an $$$n \times n$$$ matrix $$$A$$$ consisting of each number from $$$1$$$ to $$$n^2$$$ exactly once such that $$$|f(A)| = k$$$, or state that it is impossible.

InputEach test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$). The description of the test cases follows.

The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 1000, 0 \le k \le 2n$$$) — the size of the matrix and the goal value of $$$|f(A)|$$$.

It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$1000$$$.

OutputIf there is no such matrix, print $$$-1$$$. Otherwise, print $$$n$$$ lines with $$$n$$$ integers each — an $$$n \times n$$$ matrix that satisfies the conditions of the problem.

If there are multiple solutions, you may output any of them.

ExampleInput
53 03 55 54 31 1Output
-1
8 5 9
6 3 7
2 1 4
16 14 17 15 3
25 22 5 23 24
8 1 9 6 7
4 18 21 19 20
12 10 13 2 11
-1
1 NoteIn the first test case, we can see that it is impossible to construct such a $$$3 \times 3$$$ matrix where $$$f(A)$$$ is empty.

In the second test case, we can see the minimums of the rows are $$$[5, 3, 1]$$$ respectively, and the minimums of the columns are $$$[2, 1, 4]$$$ respectively. Therefore, $$$f(A) = \{1, 2, 3, 4, 5\}$$$, so $$$|f(A)| = 5$$$ as desired.

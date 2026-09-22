# 2263A - Min Max Game

**Rating:** 800
**Tags:** games
**Problem link:** https://codeforces.com/contest/2263/problem/A

---

A. Min Max Gametime limit per test1 secondmemory limit per test256 megabytesinputstandard inputoutputstandard outputBessie and Elsie are playing a game on a binary array $$$a$$$ of length $$$n$$$.

The players alternate turns, with Bessie moving first. On Bessie's turn, she chooses two adjacent elements $$$x$$$ and $$$y$$$ and replaces them with the single value $$$\max(x,y)$$$.

On Elsie's turn, she chooses two adjacent elements $$$x$$$ and $$$y$$$ and replaces them with the single value $$$\min(x,y)$$$.

After each move, the length of the array decreases by $$$1$$$. The game ends when only one element remains. Bessie wins if the final element is $$$1$$$, and Elsie wins if the final element is $$$0$$$.

Assuming both players play optimally, determine who wins.

InputEach test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 500$$$). The description of the test cases follows.

The first line of each test case contains a single integer $$$n$$$ ($$$2 \leq n \leq 100$$$).

The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \leq a_i \leq 1$$$).

OutputFor each test case, you should output the name of who wins on a new line.

ExampleInput
351 0 1 0 130 0 141 1 0 0Output
BessieElsieBessieNoteFor the first test case, Bessie can guarantee a win. One possible game is as follows: $$$$$$ [\color{red}{1},\color{red}{0},1,0,1] \to [1,\color{red}{1},\color{red}{0},1] \to [\color{red}{1},\color{red}{0},1] \to [\color{red}{1},\color{red}{1}] \to [1]. $$$$$$ The final value is $$$1$$$, so Bessie wins (the red highlight denotes the two adjacent elements picked on that turn).

For the second test case, no matter which move Bessie makes, Elsie can make the final value $$$0$$$. Therefore, Elsie wins.

For the third test case, one possible winning game for Bessie is: $$$$$$ [1,\color{red}{1},\color{red}{0},0] \to [1,\color{red}{1},\color{red}{0}] \to [\color{red}{1},\color{red}{0}] \to [1]. $$$$$$ The final value is $$$1$$$, so Bessie wins.

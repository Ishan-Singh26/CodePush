# 2266A - Good Contest

**Rating:** Unrated
**Tags:** greedy
**Problem link:** https://codeforces.com/contest/2266/problem/A

---

A. Good Contesttime limit per test1 secondmemory limit per test256 megabytesinputstandard inputoutputstandard outputThe next programming contest has three problems and $$$n$$$ participants.

Problem $$$1$$$ is easy, problem $$$2$$$ is medium, and problem $$$3$$$ is hard.

A participant is called weak if they did not solve all three problems.

Unfortunately, the scoreboard was lost. The only remaining information is an array $$$a$$$ of length $$$3$$$, where $$$a_i$$$ is the number of participants who solved problem $$$i$$$.

Among all scoreboards consistent with this information, find the minimum possible number of weak participants.

InputThe first line contains an integer $$$t$$$ ($$$1 \le t \le 3000$$$) — the number of test cases.

The first line of each test case contains an integer $$$n$$$ ($$$1 \le n \le 9$$$) — the number of participants.

The second line of each test case contains three integers $$$a_1, a_2, a_3$$$ ($$$0 \le a_i \le n$$$), where $$$a_i$$$ is the number of participants who solved problem $$$i$$$.

OutputFor each test case, print a single integer — the minimum possible number of weak participants.

ExampleInput
633 3 344 4 311 1 199 8 950 5 564 3 2Output
010154NoteIn the first test case, all $$$3$$$ participants can have solved all three problems, so the answer is $$$0$$$.

In the second test case, participant $$$1$$$ could have solved only problems $$$1$$$ and $$$2$$$, while participants $$$2$$$, $$$3$$$, and $$$4$$$ solved all three problems. Therefore, participant $$$1$$$ is the only participant who is weak, so the answer is $$$1$$$. It can be shown that this is minimal.

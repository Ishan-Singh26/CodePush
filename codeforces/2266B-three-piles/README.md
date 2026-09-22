# 2266B - Three Piles

**Rating:** Unrated
**Tags:** games, greedy, math
**Problem link:** https://codeforces.com/contest/2266/problem/B

---

B. Three Pilestime limit per test1 secondmemory limit per test256 megabytesinputstandard inputoutputstandard outputAlice and Bob are playing a game with three piles of stones. Initially, Alice has $$$a$$$ stones, Bob has $$$b$$$ stones, and the third pile contains $$$c$$$ stones.

Alice and Bob take turns, with Alice going first. On each turn, the current player may take any number of stones from the third pile, possibly zero, and add them to their own pile.

If both players take zero stones on two consecutive turns, the game ends.

Let $$$A$$$ and $$$B$$$ be the final numbers of stones Alice and Bob have, respectively. The score of the game is $$$|A-B|$$$.

Alice wants to maximize the score, while Bob wants to minimize it. Assuming both players play optimally, find the final score.

InputThe first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.

Each test case contains three integers $$$a$$$, $$$b$$$, and $$$c$$$ ($$$0 \le a,b,c \le 10^9$$$) — the initial numbers of stones Alice has, Bob has, and the third pile has, respectively.

OutputFor each test case, output one integer — the final score if both players play optimally.

It is important to use a $$$64$$$-bit integer type, such as long long in C++.

ExampleInput
53 6 33 6 105 5 42 5 667676767 41414141 998244353Output
37431024506979NoteIn the first test case, Alice can choose to take $$$0$$$ stones on her first turn. Bob can then also take $$$0$$$ stones, so the game ends with piles of sizes $$$3$$$ and $$$6$$$. Therefore, the score can be $$$3$$$. It can be shown that Alice cannot achieve a larger score, and Bob cannot achieve a smaller score.

In the second test case, Alice can take all $$$10$$$ stones from the third pile on her first turn. The game then ends with piles of sizes $$$13$$$ and $$$6$$$, so the score is $$$7$$$.

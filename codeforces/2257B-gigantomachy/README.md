# 2257B - Gigantomachy

**Rating:** Unrated
**Tags:** math
**Problem link:** https://codeforces.com/contest/2257/problem/B

---

B. Gigantomachytime limit per test1 secondmemory limit per test256 megabytesinputstandard inputoutputstandard outputTwo giants, Bea and Ver, are playing a game. Each giant has his own mountain range. You have already measured all these mountains and now know that the heights of the mountains in Bea's range are $$$a_1, a_2, \ldots a_n$$$, and in Ver's range are $$$b_1, b_2, \ldots b_m$$$, with the mountains numbered from left to right for Bea and from right to left for Ver. At the beginning of the game, the giants stand on the mountain numbered $$$1$$$. Thus, they face each other and see all their mountains and all the mountains of their opponent. It turns out that Bea and Ver are connoisseurs of beauty, so the mountains in their ranges are arranged in non-increasing order, specifically $$$a_i \ge a_{i+1}$$$ for $$$1 \le i  \lt  n$$$ and $$$b_i \ge b_{i+1}$$$ for $$$1 \le i  \lt  m$$$.

In the illustration below, there is an example of the initial arrangement, where Bea has the range $$$a_1, a_2, a_3 = 3, 2, 1$$$, and Ver has the range $$$b_1, b_2 = 4, 2$$$. For simplicity, the mountains are depicted as rectangles, with Bea's mountains on the left and Ver's on the right. For your good mood, the giants Bea and Ver are represented as beavers.

  Bea and Ver are not very smart, so on each turn they perform the same action. Specifically, the giant on his turn takes a boulder and throws it at the mountain on which his opponent is standing; as a result, the height of that mountain decreases by 1. If the giant on his turn sees that the mountain directly in front of him is higher (with a number one greater) than the one he is standing on, he jumps to it. If, however, the giant discovers that he is standing on regular ground (the height of the current mountain is 0) and there are no more mountains in front of him, he admits defeat. Bea goes first.

You know that their game can last a very long time, due to the enormous heights of the mountains and their quantities, so you want to determine who will win.

InputEach test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 500$$$). The description of the test cases follows.

The first line of each test case contains two integers $$$n$$$ and $$$m$$$ — the number of mountains in the first and second giant's range, respectively ($$$1 \le n, m \le 100$$$).

The second line of the test case contains $$$n$$$ integers $$$a_1, a_2, \ldots a_n$$$ — the heights of the mountains of the first giant ($$$1 \le a_i \le 10^9$$$; $$$a_i \ge a_{i+1}$$$).

The third line of the test case contains $$$m$$$ integers $$$b_1, b_2, \ldots b_m$$$ — the heights of the mountains of the second giant ($$$1 \le b_i \le 10^9$$$; $$$b_i \ge b_{i+1}$$$).

OutputFor each test case, output a single number — the number of the giant who will win.

ExampleInput
61 1111 1121 244 14 24 3 2 110 14 24 3 2 16 54 24 3 2 17 5Output
122212NoteIn the first test case, on his very first turn, Bea will reduce the height of Ver's only mountain to $$$0$$$ and win.

In the second test case, Bea will reduce the height of Ver's mountain to $$$1$$$, and Ver will win on his next turn.

In the third test case, during the first $$$3$$$ rounds, the heights of Bea's and Ver's mountains will decrease to $$$1$$$. Then Bea will reduce the height of Ver's mountain to $$$0$$$, but Ver still has one mountain left, and on his turn, he jumps onto it and wins by reducing the height of Bea's only mountain to $$$0$$$.

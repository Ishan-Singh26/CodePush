# 2269A - SauSaGe Bank

**Rating:** Unrated
**Tags:** greedy, math
**Problem link:** https://codeforces.com/contest/2269/problem/A

---

A. SauSaGe Banktime limit per test1 secondmemory limit per test256 megabytesinputstandard inputoutputstandard outputEveryone in SauSaGe City is talking about its famous bank that offers a seemingly impossible deal:

&quot;Leave your money with us, and we'll double it every single day!&quot;

Hamed decides to give it a try, so he deposits $$$1$$$ dollar into his account.

Suppose that at the beginning of a day, his bank balance is $$$x$$$ dollars. Every day, the following events happen in order:

  In the morning, the bank magically doubles his balance, so it becomes $$$2x$$$ dollars.  At night, Hamed may choose to withdraw all of the money from his bank account. If he does, the withdrawn amount is added to his card, and his bank account is immediately reset to $$$1$$$ dollar so that the doubling process can begin again the next day. Otherwise, he leaves the money in the bank. Unfortunately, this incredible bank will remain open for exactly $$$n$$$ days before shutting down forever.

Hamed wants to withdraw money on exactly $$$k$$$ different days before the bank closes. Determine the maximum amount of money that can be on Hamed's card after the $$$n$$$-th day.

InputEach test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 500$$$). The description of the test cases follows.

The only line of each test case contains the two integers $$$n$$$ and $$$k$$$ ($$$1\le k\le n\le30$$$).

OutputFor each test case, print a single integer — the maximum amount of money that can be on Hamed's card after the $$$n$$$-th day.

ExampleInput
51 12 14 35 510 2Output
24810514NoteIn the first test case, his bank balance becomes $$$2$$$ on the first day, and he chooses to withdraw it.

In the second test case, he can withdraw his money on the $$$2$$$-nd day.

In the third test case, he can withdraw his money on the $$$1$$$-st, $$$3$$$-rd, and $$$4$$$-th days. He receives $$$2$$$, $$$4$$$, and $$$2$$$, respectively.

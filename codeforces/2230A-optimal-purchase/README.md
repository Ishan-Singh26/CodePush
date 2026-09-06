# 2230A - Optimal Purchase

**Rating:** 800
**Tags:** implementation, math
**Problem link:** https://codeforces.com/contest/2230/problem/A

---

A. Optimal Purchasetime limit per test2 secondsmemory limit per test512 megabytesinputstandard inputoutputstandard outputYou have a group of $$$n$$$ students who need access to an online course. Two types of access keys are available in the store:

  Individual key: costs $$$a$$$ dollars and gives access to one student.  Group key: costs $$$b$$$ dollars and gives access to a group of up to three students inclusive. A group key can also be used for fewer students (one or two), and its price does not change.

Your task is to determine the minimum amount of money needed to provide access to the online course for all $$$n$$$ students.

InputThe first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.

Each test case consists of one line containing three integers $$$n, a, b$$$ ($$$1 \le n, a, b \le 10^8$$$) — the number of students, the cost of an individual key, and the cost of a group key.

OutputFor each test case, output one integer — the minimum amount of money needed to provide access to the online course for all $$$n$$$ students.

ExampleInput
95 10 254 10 501 20 151 10 25100000000 100 2902 10 15300 1 14 10 1211 10 20Output
454015109666666670151002280NoteIn the first example, you can buy $$$1$$$ group key and $$$2$$$ individual keys.

In the second example, you can buy $$$4$$$ individual keys.

In the third example, you can buy $$$1$$$ group key.

In the fourth example, you can buy $$$1$$$ individual key.

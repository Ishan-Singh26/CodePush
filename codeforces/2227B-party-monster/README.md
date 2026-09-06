# 2227B - Party Monster

**Rating:** 800
**Tags:** greedy
**Problem link:** https://codeforces.com/contest/2227/problem/B

---

B. Party Monstertime limit per test2 secondsmemory limit per test256 megabytesinputstandard inputoutputstandard outputYousef has given you a sequence $$$s$$$ of length $$$n$$$ consisting only of characters '$$$\texttt{(}$$$' and '$$$\texttt{)}$$$'. You are allowed to perform the following operation at most once: 

  Choose a substring$$$^{\text{∗}}$$$ of $$$s$$$ and remove it. Then, you may reinsert the removed characters back into the remaining string one by one. Each character can be placed at any arbitrary position, independently of the others. Yousef wants you to determine whether it is possible to obtain a regular bracket sequence$$$^{\text{†}}$$$ after performing the operation at most once.

$$$^{\text{∗}}$$$A substring is a contiguous subsegment of a string. For example, &quot;acab&quot; is a substring of &quot;abacaba&quot; (it starts in position $$$3$$$ and ends in position $$$6$$$), but &quot;aa&quot; or &quot;d&quot; aren't substrings of this string. So the substring of the string $$$s$$$ from position $$$l$$$ to position $$$r$$$ is $$$s[l, r]= s_l s_{l+1} \dots s_r$$$.

$$$^{\text{†}}$$$A regular bracket sequence is a bracket sequence that can be transformed into a correct arithmetic expression by inserting the characters $$$1$$$ and $$$+$$$ between the original characters of the sequence. For example:

  bracket sequences $$$\texttt{()()}$$$ and $$$\texttt{(())}$$$ are regular (the resulting expressions are: $$$\texttt{(1)+(1)}$$$ and $$$\texttt{((1+1)+1)}$$$);  bracket sequences $$$\texttt{)(}$$$, $$$\texttt{(}$$$ and $$$\texttt{)}$$$ are not. InputThe first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The descriptions of the test cases follow.

The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the length of the string $$$s$$$.

The second line of each test case contains a sequence $$$s$$$ of length $$$n$$$ consisting only of characters '$$$\texttt{(}$$$' and '$$$\texttt{)}$$$'.

It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.

OutputFor each test case, output &quot;YES&quot; if the sequence can be made regular, and &quot;NO&quot; otherwise.

You can output the answer in any case (upper or lower). For example, the strings &quot;yEs&quot;, &quot;yes&quot;, &quot;Yes&quot;, and &quot;YES&quot; will be recognized as positive responses.

ExampleInput
62()2)(3(((6())(()4(()(5)()()Output
YESYESNOYESNONONoteIn the first test case, the string $$$s$$$ is already a regular bracket sequence, therefore the answer is &quot;YES&quot;.

In the second test case, we can remove the substring $$$s[2, 2] = \texttt{(}$$$ and reinsert it at the beginning of the string, making $$$s = \texttt{()}$$$, therefore the answer is &quot;YES&quot;.

In the third test case, there is no way to do the operation and get a regular bracket sequence, so the answer is &quot;NO&quot;.

In the fourth test case, we can choose the substring $$$s[3, 4] = \texttt{)(}$$$, remove it, then reinsert the characters as follows:

$$$$$$ \texttt{()}{\color{red}{\texttt{)(}}}\texttt{()} \to \texttt{()()} \to {\color{green}{\texttt{(}}}\texttt{()()}{\color{green}{\texttt{)}}}$$$$$$

Therefore we have made a regular bracket sequence, and the answer is &quot;YES&quot;.

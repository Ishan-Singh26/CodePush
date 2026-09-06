#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int MAXV = 200001;
    vector<bool> prime(MAXV + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= MAXV; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAXV; j += i)
                prime[j] = false;
        }
    }

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << (prime[n + 1] ? "YES" : "NO") << '\n';
    }

    return 0;
}
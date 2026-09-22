#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int odd = 0;
        int zero = 0;
        int two = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x % 2 == 1)
                odd++;
            else if (x % 4 == 0)
                zero++;
            else
                two++;
        }

        cout << max({odd, zero, two}) << '\n';
    }

    return 0;
}
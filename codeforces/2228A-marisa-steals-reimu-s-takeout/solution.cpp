#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int c[3] = {0};

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            c[x]++;
        }

        int pairs = min(c[1], c[2]);

        c[1] -= pairs;
        c[2] -= pairs;

        int ans = c[0] + pairs + (c[1] + c[2]) / 3;

        cout << ans << '\n';
    }

    return 0;
}
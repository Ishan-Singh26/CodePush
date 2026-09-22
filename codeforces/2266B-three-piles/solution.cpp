#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll x = abs(a - b);
    ll y = abs(a + c - b);

    cout << max(x, y) << '\n';
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
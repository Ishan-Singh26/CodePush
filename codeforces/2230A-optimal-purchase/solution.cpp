#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;

    ll ans = 0;

    ans += (n / 3) * min(3 * a, b);

    ll rem = n % 3;

    if (rem == 1) {
        ans += min(a, b);
    }
    else if (rem == 2) {
        ans += min(2 * a, b);
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
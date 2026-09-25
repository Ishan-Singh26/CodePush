#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

typedef long long ll;

void solve() {
    ll n;
    cin >> n;

    string s;
    cin >> s;

    set<ll> st;

    for (ll i = 0; i < n; i++) {
        if (s[i] == '0') {
            st.insert(i + 1);
        }
    }

    // if (s[0] == '0') {
    //     cout << n << '\n';
    //     return;
    // }

    ll ans = 0;

    ll r = 0;
    unordered_set<ll> st2;

    for (ll x : st) {
        ll k = 1;

        while (x * k <= n) {
            if (st2.find(x * k) == st2.end()) {

                if (st.find(x * k) != st.end()) {
                    st2.insert(x * k);
                    ans = ans + x;
                    k++;
                }
                else {
                    break;
                }
            }
            else {
                k++;
            }
        }
    }

    cout << ans << '\n';
}

int main() {
    ll T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
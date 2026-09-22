#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    ll sum = 0, mn = 0;

    for(int i = 0; i < n; i++) {
        sum += max(a[i], b[i]);
        mn = max(mn, min(a[i], b[i]));
    }

    cout << sum + mn << '\n';
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
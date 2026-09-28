#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n,k;
    cin>>n>>k;

    ll r = 1;
    ll ans = 0;

    for(int i = 1;i<n-k+2;i++){
        r = r*2;
    }

    ans = 2*(k-1);
    ans = ans+r;

    cout<<ans<<'\n';
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
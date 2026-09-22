#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin>>n;
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int x = min({a1,a2,a3});
    cout<<n-x<<'\n';

}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
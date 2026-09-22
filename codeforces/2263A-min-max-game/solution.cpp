#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
        int n;
        cin >> n;

        int cnt = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x == 1)
                cnt++;
        }

        if(cnt >= (n + 1) / 2)
            cout << "Bessie\n";
        else
            cout << "Elsie\n";
    }
int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
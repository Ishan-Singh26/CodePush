#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;

    int maxi = -1;
    unordered_map<int, int> mp;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (mp.find(arr[i]) != mp.end()) {
            mp[arr[i]]++;
        }
        else {
            mp[arr[i]] = 1;
        }

        maxi = max(maxi, arr[i]);
    }

    vector<ll> dp(maxi + 1, 0);

    dp[1] = 1LL * mp[1];

    for (int i = 2; i <= maxi; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + 1LL * i * mp[i]);
    }

    cout << dp[maxi];
}
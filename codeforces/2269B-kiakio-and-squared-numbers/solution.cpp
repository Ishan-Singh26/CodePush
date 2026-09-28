#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int sqsm(int n){
    int sum = 0;
    while(n > 0){
        int x = n % 10;
        sum += x * x;
        n /= 10;
    }
    return sum;
}

int func(int n){

    while(n != 1 && n != 4){
        n = sqsm(n);
    }

    if(n == 1){
        return 1;
    }
    else{
        return 2;
    }
}

void solve() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<pair<int,int>> aw;

    for(int i = 0; i < n; i++){
        int r = func(arr[i]);
        aw.push_back({arr[i], r});
    }

    for(int i = 0; i < n; i++){
        int x = aw[i].first;

        for(int t = 0; t < 100; t++){
            x = sqsm(x);
        }

        aw[i].first = x;
    }

    int k = 0;

    for(int i = 0; i < n; i++){
        if(aw[i].second == 1){
            k++;
        }
    }

    vector<int> x;
    map<int,int> mp;

    for(int i = 0; i < n; i++){
        if(aw[i].second == 2){
            mp[aw[i].first]++;
        }
    }

    ll ans = 0;

    for(auto i : mp){
        ans += 1LL * i.second * (i.second - 1) / 2;
    }

    ll kC2 = 1LL * k * (k - 1) / 2;

    cout << kC2 + ans << '\n';
}

int main() {

    int T;
    cin >> T;

    while(T--){
        solve();
    }

    return 0;
}
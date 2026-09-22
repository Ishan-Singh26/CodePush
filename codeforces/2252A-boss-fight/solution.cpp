#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin>>n;

    unordered_map<ll,ll>mp;

    ll sum = 0;

    for(int i = 0;i<n;i++){
        ll x;
        cin>>x;

        sum = sum + x;
        mp[x]++;
    }

    ll mx = 0;
    ll val = 0;

    for(auto x : mp){
        if(x.second > mx){
            mx = x.second;
            val = x.first;
        }
    }

    ll other = n-mx;

    if(mx <= other+2){
        cout<<sum<<endl;
    }
    else{
        ll extra = mx-(other+2);

        sum = sum-(extra*val);

        cout<<sum<<endl;
    }
}

int main() {
    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
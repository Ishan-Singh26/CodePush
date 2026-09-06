#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll findGcd(ll a,ll b){
    while(b!=0){
        ll temp=b;
        b=a%b;
        a=temp;
    }

    return a;
}

void solve(){
    int n;
    cin>>n;

    vector<ll>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<findGcd(arr[0],arr[n-1])<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
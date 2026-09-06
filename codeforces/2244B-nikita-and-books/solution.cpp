#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    ll sm=0;
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        sm=sm+x;
        ll need=1LL*i*(i+1)/2;
        if(sm<need){
            cout<<"NO"<<'\n';
            for(int j=i+1;j<=n;j++){
                cin>>x;
            }
            return;
        }
    }
    cout<<"YES"<<'\n';
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
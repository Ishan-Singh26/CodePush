#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int ans = 0;

    for(int i = 0;i<n/k;i++){
        bool flag = false;

        for(int j = i*k;j<(i+1)*k;j++){
            if(s[j]=='0'){
                flag = true;
            }
        }

        if(!flag){
            ans++;
        }
    }

    cout<<ans<<"\n";
}

int main() {
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}
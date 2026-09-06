#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin>>n;
    int p=-1;
    int x=n-1;
    while(x!=0){
        x=x/2;
        p++;
    }
    for(int i=0;i<pow(2,p);i++){
        cout<<pow(2,p)-i-1<<" ";
    }
    int j=0;
    for(int i=pow(2,p);i<n;i++){
        cout<<i<<" ";
        j++;
    }
    cout<<'\n';
}

int main() {
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
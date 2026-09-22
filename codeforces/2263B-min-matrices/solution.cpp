#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;

    if(k<n || k>n+(n-1)){
        cout<<-1<<'\n';
        return;
    }

    vector<vector<int>> v(n, vector<int>(n));

    int x = n+(n-k);
    int r = 1;

    for(int i = 0;i<x;i++){
        v[i][i] = r;
        r++;
    }

    for(int i = x;i<n;i++){
        v[i][0] = r;
        r++;
    }

    for(int j = x;j<n;j++){
        v[0][j] = r;
        r++;
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(v[i][j] == 0){
                v[i][j] = r;
                r++;
            }
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<'\n';
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
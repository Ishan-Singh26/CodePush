#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
    }
    for(int i = 0; i < n; i++){
        cin >> v[i].second;
    }
    vector<int>arr(n);
    for(int i= 0;i<n;i++){
        arr[i] = v[i].second-v[i].first;
    }
    int count = 0;
    sort(arr.begin(),arr.end());
    int x = 0;
    if(n%2 == 0){
        x = n/2;
    }
    else{
        x = n/2+1;
    }
    int l = 0;
    int r = n-1;
    while(l<r){
        if(arr[l]+arr[r]>=0){
            count++;
            l++;
            r--;
        }
        else{
            l++;
        }
    }
    cout<<count<<'\n';
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
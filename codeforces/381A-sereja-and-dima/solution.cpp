#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int left = 0;
    int right = n-1;

    int sereja = 0;
    int dima = 0;

    for(int i = 0;i<n;i++){
        if(arr[left] > arr[right]){
            if(i%2 == 0){
                sereja += arr[left];
            }
            else{
                dima += arr[left];
            }
            left++;
        }
        else{
            if(i%2 == 0){
                sereja += arr[right];
            }
            else{
                dima += arr[right];
            }
            right--;
        }
    }

    cout<<sereja<<" "<<dima<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
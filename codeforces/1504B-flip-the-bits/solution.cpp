#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int c1 = 0;
    int c0 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == '1'){
            c1++;
        }
        else{
            c0++;
        }
    }
    bool flip = false;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int idx = n - 1 - i;

        char cur = a[idx];

        if(flip){
            if(cur == '1'){
                cur = '0';
            }
            else{
                cur = '1';
            }
        }

        if(cur == b[idx]){
            if(cur == '1'){
                c1--;
            }
            else{
                c0--;
            }
        }
        else if(c1 == c0){
            cnt++;

            if(cnt % 2 == 1){
                flip = true;
            }
            else{
                flip = false;
            }

            cur = a[idx];

            if(flip){
                if(cur == '1'){
                    cur = '0';
                }
                else{
                    cur = '1';
                }
            }

            if(cur == '1'){
                c1--;
            }
            else{
                c0--;
            }
        }
        else{
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    int T;
    cin >> T;

    while(T--){
        solve();
    }
}
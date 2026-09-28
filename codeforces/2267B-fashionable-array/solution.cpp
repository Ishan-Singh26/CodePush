#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> mp;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    while(!mp.empty()){

        auto it = mp.end();

        while(it != mp.begin()){

            it--;

            cout << it->first << " ";

            it->second--;

            if(it->second == 0){
                auto temp = it;
                it++;

                mp.erase(temp);

                if(it == mp.end()){
                    break;
                }
            }
        }
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
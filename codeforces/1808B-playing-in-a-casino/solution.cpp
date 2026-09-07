#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>arr(n,vector<ll>(m));
    for(ll i = 0;i<n;i++){
        for(ll j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    ll ans = 0;
    vector<vector<ll>>arr2(m,vector<ll>(n));
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            arr2[j][i] = arr[i][j];
        }
    }
    for (ll i = 0; i < m; i++)
		{
			sort(arr2[i].begin(), arr2[i].end());
		}
    for(ll i = 0;i<m;i++){
        for(ll j = 0;j<n;j++){
            ans += arr2[i][j] * j;
            ans -= arr2[i][j] * (n-j-1);
        }
    }

        cout<<ans<<'\n';
    }
    

int main() {
    ll T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    int n,q;
    cin>>n>>q;
    vector<ll> arr(n),arr2(q);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<q;i++) cin>>arr2[i];
    vector<pair<ll,ll>> v(n);
    v[0]={arr[0],arr[0]};
    ll sm=arr[0];
    for(int i=1;i<n;i++){
        v[i].first=max(v[i-1].first,arr[i]);
        sm+=arr[i];
        v[i].second=sm;
    }
    vector<int> idx(q);
    for(int i=0;i<q;i++) idx[i]=i;
    sort(idx.begin(),idx.end(),[&](int a,int b){
        return arr2[a]<arr2[b];
    });
    vector<ll> ans(q);
    int j=-1;
    for(int i=0;i<q;i++){
        int qi=idx[i];
        while(j+1<n&&v[j+1].first<=arr2[qi]) j++;
        ans[qi]=(j==-1)?0:v[j].second;
    }
    for(int i=0;i<q;i++) cout<<ans[i]<<' ';
    cout<<'\n';
}
int main(){
    int T;
    cin>>T;
    while(T--) solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    bool trt = true;

    while(t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int>v;

        for(int i = 0; i < n; i++){
            if(arr[i] != i+1){
                v.push_back(arr[i]);
            }
        }

        vector<int>rev = v;

        reverse(rev.begin(), rev.end());

        sort(v.begin(), v.end());

        if(v == rev){
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}
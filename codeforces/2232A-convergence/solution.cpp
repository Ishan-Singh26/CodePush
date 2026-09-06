#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int ans = 0;

        for(int i = 0; i < n / 2; i++)
        {
            if(a[i] != a[n - 1 - i])
            {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
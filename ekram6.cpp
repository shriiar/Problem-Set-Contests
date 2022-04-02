#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, ans, mx = -1;
        cin >> n;
        vector<int> v(101, 0);
        for(int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v[val]++;
        }
        for(int i = 0; i < v.size(); i++)
        {
            if(i > mx && v[i] != 0)
            {
                mx = i;
                ans = v[i];
            }
        }
        cout << mx << " " << ans << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define mapi map <int, int>
#define for0(i, n) for (ll i=0;i<n;i++)
#define unq(v) (v).erase(unique(all((v))), (v).end())
#define all(v) (v).begin(), (v).end()
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = 0;
        cin >> n;
        vi v;
        mapi m;
        for(int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if(val < 0) val *= -1;
            v.push_back(val);
            m[val]++;
        }
        sort(v.begin(), v.end());
        unq(v);
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] == 0)
            {
                ans++;
                continue;
            }
            if(m[v[i]] > 1) ans += 2;
            else if(m[v[i]] == 1) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
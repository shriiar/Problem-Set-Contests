#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int n, id = 0, ig = 0;
    cin >> n;
    vector<pair<int, string>> v;
    vector<pair<string, int>> ans;
    for(int i = 0; i < n; i++)
    {
        string s;
        int w, x, y, z;
        cin >> s >> w >> x >> y >> z;
        v.push_back(make_pair((w + x + y + z), s));
    }
    sort(v.rbegin(), v.rend());
    for(int i = 0; i < n; i++)
    {
        if(ans.size() == 0) ans.push_back(make_pair(v[i].second, v[i].first));
        else
        {
            if(v[i].first == ans[ans.size() - 1].second) ans.push_back(make_pair(v[i].second, v[i].first));
            else
            {
                sort(ans.begin(), ans.end());
                for(int i = 0; i < ans.size(); i++) cout << ans[i].first << " " << ans[i].second << endl;
                ans.clear();
                ans.push_back(make_pair(v[i].second, v[i].first));
            }
        }
    }
    if(ans.size() != 0)
    {
        sort(ans.begin(), ans.end());
        for(int i = 0; i < ans.size(); i++) cout << ans[i].first << " " << ans[i].second << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        vector<int> v;
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        for (int i = 0; i < n; i++)
        {
            int max_element = v[i];
            for (int j = i; j < n; j++)
            {
                max_element = max(max_element, v[j]);
                res.push_back(max_element);
            }
        }
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}

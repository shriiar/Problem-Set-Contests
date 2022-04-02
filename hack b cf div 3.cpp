#include <bits/stdc++.h>
 
using namespace std;
 
#define lg long long
#define fastio ios_base::sync_with_stdio(0);cin.tie();cout.tie();
 
const lg MOD = 1e9+7;
lg cnt, t;
string answer;
 
int main()
{   
    vector<lg> ans;
    map<lg, lg> mp;
    for(lg i = 1; i*i <= 1e9; i++)
    {
        if(!mp[i*i])
        {
            ans.push_back(i*i);
            mp[i*i] = 1;
        }
        if(i*i*i <= 1e9 && !mp[i*i*i])
        {
            ans.push_back(i*i*i);
            mp[i*i*i] = 1;
        }
    }
    sort(ans.begin(), ans.end());
    cin >> t;
    while(t--)
    {
        lg n;
        cin >> n;
        lg idx = upper_bound(ans.begin(), ans.end(), n) - ans.begin();
        cout << idx << '\n';
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, x = 0, y = 0, c = 0;
        cin >> n;
        map <int, int> mp;
        vector <int> v;
        for(int i=0; i<4*n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            mp[x]++;
        }
        for(int i=1; i<=1e4; i++)
        {
            if(mp[i]==2 || mp[i]==3)
                x += mp[i];
            else if(mp[i]>=4)
                y += mp[i];
        }
        while(1)
        {
            if(x-4<0)
                break;
            x -= 4;
            c++;
        }
        while(1)
        {
            if(y-4<0)
                break;
            y -= 4;
            c++;
        }
        if(c>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

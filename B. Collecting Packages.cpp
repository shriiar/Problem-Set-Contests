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
        int n, x, y;
        cin >> n;
        vector <pair<int, int>> v;
        v.push_back(make_pair(0, 0));
        bool f = true;
        for(int i=1; i<=n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back(make_pair(x, y));
        }
        sort(v.begin(), v.end());
        for(int i=1; i<=n; i++)
        {
            if(v[i].first<v[i-1].first || v[i].second<v[i-1].second)
            {
                f = false;
                break;
            }
        }
        if(f==true)
        {
            cout<<"YES"<<endl;
            for(int i=1; i<=n; i++)
            {
                x = abs(v[i].first - v[i-1].first);
                y = abs(v[i].second - v[i-1].second);
                for(int j=0; j<x; j++)
                    cout<<"R";
                for(int j=0; j<y; j++)
                    cout<<"U";
            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}

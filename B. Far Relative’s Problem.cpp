#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    char q;
    vector <pair<int, int>> m;
    vector <pair<int, int>> f;
    while(n--)
    {
        int x, y;
        cin >> q >> x >> y;
        if(q=='M')
            m.push_back(make_pair(x, y));
        else
            f.push_back(make_pair(x, y));
    }
    vector <bool> bm (m.size(), 0);
    vector <bool> bf (f.size(), 0);
    int c = 0;
    for(int i=0; i<m.size(); i++)
    {
        for(int j=0; j<f.size(); j++)
        {
            if(bf[j]==0 && f[j].first>=m[i].first && f[j].first<=m[i].second && f[j].second>=m[i].first && f[j].second<=m[i].second)
            {
                c += 2;
                bf[j] = 1;
            }
            else if(bf[j]==0 && f[j].first>=m[i].first && f[j].first<=m[i].second && f[j].second>=m[i].first && f[j].second>m[i].second)
            {
                c += 2;
                bf[j] = 1;
            }
            else if(bf[j]==0 && f[j].first<m[i].first && f[j].first<m[i].second && f[j].second>=m[i].first && f[j].second<=m[i].second)
            {
                c += 2;
                bf[j] = 1;
            }
        }
    }
    cout<<c<<endl;
}



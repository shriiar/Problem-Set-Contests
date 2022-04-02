#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, c;
    cin >> n;
    bool f = true;
    vector <pair<int, int>> v;
    vector <int> b;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(make_pair(x, i+1));
        b.push_back(x);
    }
    sort(v.begin(), v.end());
    sort(b.begin(), b.end());
    b.resize(unique(b.begin(), b.end()) - b.begin());
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());
    vector <int> p[b.size()];
    vector <pair<int, bool>> q;
    for(int i=0; i<b.size(); i++)
        q.push_back(make_pair(b[i], 0));
    int y = v[0].first, j = 0;
    c = b.size();
    for(int i=0; i<v.size(); i++)
    {
        if(v[i].first==y)
        {
            int z = v[i].second;
            p[j].push_back(z);
        }
        else
        {
            j++;
            y = v[i].first;
            i--;
        }
    }
    for(int i=0; i<b.size(); i++)
    {
        bool g = true;
        int y, z;
        if(p[i].size()==1)
        {
            q[i].second = 0;
            p[i].clear();
            p[i][0] = 0;
        }
        else
        {
            for(int j=0; j<p[i].size()-1; j++)
            {
                z = p[i][j+1] - p[i][j];
                if(g==true)
                {
                    y = z;
                    g = false;
                }
                else if(y!=z)
                {
                    f = false;
                    q[i].second = 1;
                    break;
                }
            }
            if(f==false)
                c--;
            if(f==true)
            {
                p[i].clear();
                p[i][0] = z;
            }
            f = true;
        }
    }
    if(c==0)
        cout<<"0"<<endl;
    else
    {
        cout<<c<<endl;
        for(int i=0; i<q.size(); i++)
        {
            if(q[i].second==0)
                cout<<q[i].first<<" "<<p[i][0]<<endl;
        }
    }
}

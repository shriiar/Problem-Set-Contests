#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <vector <int> > v(n+1);
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            v[x].push_back(i);
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<v[i].size(); j++)
                cout<<v[i][j]<<" ";
            cout<<endl;
        }
        int c = 1e8;
        for(int i=1; i<=n; i++)
        {
            int x = v[i].size();
            if(x==0)
                continue;
            else if(x==n)
            {
                c = 0;
                break;
            }
            int z = x + 1;
            if(v[i][0]==1)
                z--;
            if(v[i][x-1]==n)
                z--;
            for(int j=0; j<v[i].size()-1; j++)
            {
                if(v[i][j+1]-v[i][j]==1)
                    z--;
            }
            c = min(c, z);
        }
        cout<<c<<endl;
    }
}

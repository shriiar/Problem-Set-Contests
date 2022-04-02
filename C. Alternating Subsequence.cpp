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
        long long n, s = 0;
        cin >> n;
        vector <int> v;
        vector <vector<int>> p(n+1);
        for(int i=0; i<n; i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
        }
        int q = 0;
        p[q].push_back(v[0]);
        for(int i=1; i<n; i++)
        {
            if((v[i-1]>0 && v[i]>0) || (v[i-1]<0 && v[i]<0))
                p[q].push_back(v[i]);
            else
            {
                q++;
                p[q].push_back(v[i]);
            }
        }
        for(int i=0; i<n; i++)
        {
            if(p[i].size()==0)
                break;
            else
            {
                sort(p[i].begin(), p[i].end());
                int x = p[i].size()-1;
                s += p[i][x];
            }
        }
        cout<<s<<endl;
    }
}

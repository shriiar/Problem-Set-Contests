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
        long long n, x, s = 0, i = 0;
        vector <pair<int,int>> v;
        cin >> n >> x;
        for(int i=0; i<n; i++)
        {
            long long z;
            cin >> z;
            v.push_back(make_pair(z, 1));
        }
        while(v[i].first%x==0)
        {
            if(v[i].first%x==0)
                v.push_back(make_pair(v[i].first/x, x*v[i].second));
            i++;
        }
        for(int i=0; i<v.size(); i++)
            s += v[i].first*v[i].second;
        cout<<s<<endl;
    }
}

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
        int n;
        cin >> n;
        vector <int> v;
        map <int, int> m;
        for(int i=0; i<n; i++)
        {
            long long x;
            cin >> x;
            if(x%2==0 && m[x]==0)
            {
                v.push_back(x);
                m[x]++;
            }
        }
        int c = 0, x = 0;
        sort(v.rbegin(), v.rend());
        while(1)
        {
            if(x==v.size())
                break;
            v[x] /= 2;
            c++;
            if(v[x]%2!=0)
                x++;
            else if(m[v[x]]!=0)
                x++;
        }
        cout<<c<<endl;
    }
}

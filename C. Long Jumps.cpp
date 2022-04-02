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
        long long n, s = 0, p = 1, z = 0;
        cin >> n;
        vector <int> v;
        v.push_back(0);
        for(int i=1; i<=n; i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
        }
        for(int i=n; i>=1; i--)
        {
            if(v[i]+i<=n)
                v[i] += (v[v[i]+i]);
        }
        cout<<*max_element(v.begin()+1, v.end())<<endl;
    }
}

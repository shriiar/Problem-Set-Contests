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
        long long n, c = 0;
        cin >> n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
        }
        for(int i=0; i<n-1; i++)
        {
            if(v[i]>v[i+1])
                c += v[i] - v[i+1];
        }
        cout<<c<<endl;
    }
}

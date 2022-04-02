#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector <int> v;
    vector <int> u;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        u.push_back(x);
    }
    sort(v.rbegin(), v.rend());
    long long x = n, mx = 0, mn = 0;
    while(x--)
    {
        mx += v[0];
        v[0]--;
        sort(v.rbegin(), v.rend());
    }
    x = n;
    sort(u.begin(), u.end());
    while(x--)
    {
        for(int i=0; i<m; i++)
        {
            if(u[i]>=1)
            {
                mn += u[i];
                u[i]--;
                break;
            }
        }
        sort(u.begin(), u.end());
    }
    cout<<mx<<" "<<mn<<endl;
}

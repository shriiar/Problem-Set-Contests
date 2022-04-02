#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }
    long long int c = abs(v[0]), y = 0, z = v[0];
    for(int i=1; i<n; i++)
    {
        y = v[i];
        if((z<0 && y>0) || (z>0 && y<0))
        {
            c += abs(z-0);
            c += abs(0-v[i]);
        }
        else
            c += abs(z - y);
        z = v[i];
    }
    cout<<c<<endl;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n, t, s = 0;
    cin >> n >> t;
    vector <long long> v;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        if(t!=0)
        {
            s += (t*v[i]);
            t--;
        }
        else
            s += v[i];
    }
    cout<<s<<endl;
}

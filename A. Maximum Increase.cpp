#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c = 1, z;
    cin >> n;
    vector <int> v;
    vector <int> r;
    r.push_back(1);
    for(int i=0; i<n; i++)
    {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    for(int i=0; i<n-1; i++)
    {
        if(v[i]<v[i+1])
            c++;
        else
        {
            r.push_back(c);
            c = 1;
        }
    }
    r.push_back(c);
    cout<<*max_element(r.begin(), r.end());
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    cin >> n >> l;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    double d = max(v[0] - 0, l - v[n-1]);
    for(int i=1; i<n-1; i++)
    {
        d = max(d, (double)(v[i]-v[i-1]/2));
    }
    cout<<d<<endl;
}

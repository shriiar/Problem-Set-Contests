#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, s = 0;
    cin >> n >> k;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i=0; i<n-1; i++)
    {
        if(v[i]+v[i+1]<k)
        {
            int x = k - (v[i]+v[i+1]);
            s += x;
            v[i+1] += x;
        }
    }
    cout<<s<<endl;
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

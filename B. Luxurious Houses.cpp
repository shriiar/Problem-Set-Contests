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
    vector <int> b;
    int x, y = 0;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for(int i=n-1; i>=0; i--)
    {
        b.push_back(max(y-v[i]+1, 0));
        y = max(y, v[i]);
    }
    for(int i=n-1; i>=0; i--)
    {
        if(i>0)
            cout<<b[i]<<" ";
        else
            cout<<b[i]<<endl;
    }
}

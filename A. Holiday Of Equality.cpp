#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0, y = -1;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(x>=y)
            y = x;
        v.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        c += y - v[i];
    }
    cout<<c<<endl;
}

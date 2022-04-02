#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, o = 0, e = 0, c = 0;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if(i%2==0)
            o += x;
        else
            e += x;
    }
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
            o -= v[i];
        else
            e -= v[i];
        if(o==e)
            c++;
        if(i%2==0)
            e += v[i];
        else
            o += v[i];
    }
    cout<<c<<endl;
}

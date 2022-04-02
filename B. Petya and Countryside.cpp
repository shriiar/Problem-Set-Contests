#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int c = 1, x = 0;
    for(int i=0; i<n-1; i++)
    {
        if(v[i]>=v[i+1])
            c++;
        else
            break;
    }
    if(c!=0)
    {
        x = c;
        c = 1;
    }
    for(int i=1; i<n-1; i++)
    {
        for(int j=i; j<n-1; j++)
        {
            if(v[j]>=v[j+1])
                c++;
            else
                break;
        }
        for(int j=i; j>=0; j--)
        {
            if(v[j]>=v[j-1])
                c++;
            else
                break;
        }
        if(c>x)
        {
            x = c;
            c = 1;
        }
        else
            c = 1;
    }
    for(int i=n-1; i>=0; i--)
    {
        if(v[i]>=v[i-1])
            c++;
        else
            break;
    }
    if(c>x)
        x = c;
    cout<<x<<endl;
}

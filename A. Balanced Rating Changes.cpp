#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int x = 1;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]%2==0)
            cout<<v[i]/2<<endl;
        else
        {
            cout<<(v[i]+x)/2<<endl;;
            x *= -1;
        }
    }
}

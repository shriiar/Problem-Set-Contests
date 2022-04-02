#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, a, t, c=0;
    cin >> t;
    vector <int> x;
    vector <int> y;
    while(t--)
    {
        cin >> h >> a;
        x.push_back(h);
        y.push_back(a);
    }
    for(int i=0; i<x.size(); i++)
    {
        for(int j=0; j<y.size(); j++)
        {
            if(x[i]==y[j])
                c++;
        }
    }
    cout<<c<<endl;
}

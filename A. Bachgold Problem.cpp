#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x = 2;
    cin >> n;
    vector <int> v;
    while(n!=0)
    {
        if(n-x!=1)
        {
            n -= x;
            v.push_back(x);
        }
        else
            x++;
    }
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        if(i<v.size()-1)
            cout<<v[i]<<" ";
        else
            cout<<v[i]<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=4, c=0;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i]==v[i+1])
        {
            c++;
        }
    }
    cout<<c<<endl;
}

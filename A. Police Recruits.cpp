#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s=0, c=0;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>0)
        {
            s += v[i];
        }
        else
        {
            if(s>=v[i] && s!=0)
                s--;
            else
                c++;
        }
    }
    cout<<c<<endl;
}

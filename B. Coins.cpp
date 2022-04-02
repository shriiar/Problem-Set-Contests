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
    for(int i=n; i>=1; i--)
    {
        if(n%i==0)
            v.push_back(i);
    }
    b.push_back(v[0]);
    for(int i=1, x = 0; i<v.size(); i++)
    {
        if(v[x]%v[i]==0)
        {
            b.push_back(v[i]);
            x = i;
        }
    }
    for(int i=0; i<b.size(); i++)
        cout<<b[i]<<" ";
    cout<<endl;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, k, c = 0, x = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    vector <char> v;
    vector <bool> b(n, 0);
    for(int i=0; i<k; i++)
    {
        char y;
        cin >> y;
        v.push_back(y);
    }
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[j]==v[i])
                b[j] = 1;
        }
    }
    for(int i=0; i<b.size(); i++)
    {
        if(b[i]==1)
            x++;
        else
        {
            c += ((x*(x+1))/2);
            x = 0;
        }
    }
    if(x!=0)
        c += ((x*(x+1))/2);
    cout<<c<<endl;
}

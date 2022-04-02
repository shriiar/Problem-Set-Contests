#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, t, c=0;
    cin >> n >> t;
    vector <char> s;
    vector <long long int> v;
    for(int i=0; i<n; i++)
    {
        char x;
        int y;
        cin >> x >> y;
        s.push_back(x);
        v.push_back(y);
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]=='+')
        {
            t += v[i];
        }
        else if(s[i]=='-' && t>=v[i])
        {
            t -= v[i];
        }
        else
            c++;
    }
    cout<<t<<" "<<c<<endl;
}

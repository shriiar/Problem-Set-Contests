#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c, d;
    cin >> a >> b >> c;
    d = a + b;
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());
    if(d==c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}

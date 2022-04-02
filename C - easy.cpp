#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, s;
    cin >> x >> y;
    if(y%2==0)
    {
        s = x + (y / 2);
        cout<<s<<endl;
    }
    else
    {
        s = x + y;
        cout<<s<<endl;
    }
}

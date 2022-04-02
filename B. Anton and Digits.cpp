#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, d, x;
    long long s = 0;
    cin >> a >> b >> c >> d;
    x = min(a, min(c, d));
    a -= x;
    c -= x;
    d -= x;
    s += (256*x);
    if(a!=0 && b!=0)
    {
        int y = min(a, b);
        s += (32*y);
    }
    cout<<s<<endl;
}

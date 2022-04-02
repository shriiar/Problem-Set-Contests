#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c=0;
    cin >> a >> b;
    int x = min(a, b);
    int y = max(a, b);
    y -= x;
    while(y>1)
    {
        y -= 2;
        c++;
    }
    cout<<x<<" "<<c<<endl;
}

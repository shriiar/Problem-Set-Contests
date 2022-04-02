#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r, x, y=1, z, i=1;
    cin >> k >> r;
    while(y)
    {
        x = k * i;
        z = x % 10;
        if(z!=0)
        {
            y = x - r;
            y = y % 10;
            if(y!=0)
                i++;
            else
                break;
        }
        else
            break;
    }
    cout<<i<<endl;
}

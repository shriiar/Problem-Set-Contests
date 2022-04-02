#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m=0, k, l=240, x, c=0;
    cin >> n >> k;
    x = l - k;
    for(int i=1; i<=n; i++)
    {
        m += (i*5);
        if(m<=x)
        {
            c++;
        }
        else
            break;
    }
    cout<<c<<endl;
}

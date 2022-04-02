#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x=1, c=0;
    cin >> n;
    int y = n;
    while(x<n)
    {
        n -= x;
        if(n%x==0)
            c++;
        x++;
        n = y;
    }
    cout<<c<<endl;
}

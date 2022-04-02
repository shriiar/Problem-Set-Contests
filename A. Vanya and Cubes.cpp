#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i=1, c = 0, s = 0;
    cin >> n;
    while(1)
    {
        s += i;
        n -= s;
        if(n<0)
            break;
        i++;
        c++;
    }
    cout<<c<<endl;
}

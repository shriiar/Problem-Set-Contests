#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c=0;
    cin >> n;
    while(n--)
    {
        int p, q, r=0;
        cin >> p >> q;
        r = q - p;
        if(q>=2 &&  r>=2)
        {
            c++;
        }
    }
    cout<<c<<endl;
}

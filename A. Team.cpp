#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, f=3, s, c, d=0;
    cin >> p;
    while(p--)
    {
        c=0;
        for(int i=0; i<f; i++)
        {
        cin >> s;
        if(s==1)
            c++;
        }
        if(c>=2)
            d++;
    }
    cout<<d<<endl;
}

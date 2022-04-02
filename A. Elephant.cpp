#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, c=0;
    cin >> x;
    int a[5]={1,2,3,4,5};
    for(int i=0; i<1000000; i++)
    {
        if(x<=a[4])
        {
            c++;
            break;
        }
        else
        {
            x = x - a[4];
            c++;
        }
    }
    cout<<c<<endl;
}

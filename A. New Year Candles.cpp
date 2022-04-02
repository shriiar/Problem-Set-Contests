#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c=0;
    cin >> a >> b;
    while(a>0)
    {
        a--;
        c++;
        if(c%b==0)
            a++;
    }
    cout<<c<<endl;
}

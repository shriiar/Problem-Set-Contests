#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a=0, b=0, c=0, d=0;
    cin >> n;
    int x[n];
    for(int i=0; i<n; i++)
    {
        cin >> x[i];
        if(x[i]==1)
            a++;
        else if(x[i]==2)
            b++;
        else if(x[i]==3)
            c++;
        else
            d++;
    }
    int t = d;
    t += c;
    if(a<=c)
        a = 0;
    else
        a -= c;
    t = t + (b/2);
    if(b%2==1)
    {
        t++;
        if(a<=2)
            a=0;
        else
            a-=b;
    }
    t = t + (a/4);
    if(a%4!=0)
        t++;
    cout<<t<<endl;
}

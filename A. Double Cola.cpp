#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, c = 2, m = 5, z, d=0;
    cin >> n;
    while(m<=n)
    {
        if(m + (m*2)>n)
            break;
        m = m + (m*2);
        c *= 2;
    }
    z = n - m;
    c *= 2;
    while(1)
    {
        if(z-c<=0)
            break;
        z = z - c;
        d++;
    }
    d--;
    cout<<d<<endl;
    if(d==0)
        cout<<"Sheldon"<<endl;
    else if(d==1)
        cout<<"Leonard"<<endl;
    else if(d==2)
        cout<<"Penny"<<endl;
    else if(d==3)
        cout<<"Rajesh "<<endl;
    else if(d==4)
        cout<<"Howard "<<endl;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, t1, k, k1=0, d, i=1;
    cin >> n >> t >> k >> d;
    if(n>k)
    {
        while(n>k1)
        {
            t1 = t * i;
            k1 = k * i;
            i++;
        }
        int t2 = t+d;
        if(t1>t2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

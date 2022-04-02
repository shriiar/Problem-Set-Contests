#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k, n, w, x=0;
    cin >> k >> n >> w;
    for(int i=1; i<=w; i++)
    {
        x = x + (k*i);
    }
    if(x>n)
    {
        x = x - n;
        cout<<x<<endl;
    }
    else
        cout<<"0"<<endl;
}

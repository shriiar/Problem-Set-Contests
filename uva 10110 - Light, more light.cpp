#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    while(cin >> n)
    {
        if(n==0)
            break;
        long long x = sqrt(n);
        x *= x;
        if(x==n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }

}

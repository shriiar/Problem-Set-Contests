#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long t = sqrt(n);
    t *= t;
    if(t==n)
        cout<<"YES"<endl;
    else
        cout<<"NO"<<endl;
}


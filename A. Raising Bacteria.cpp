#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, y=0;
    cin >> n;
    while(n!=0)
    {
        if(n%2==1)
            y++;
        n /= 2;
    }
    cout<<y<<endl;
}

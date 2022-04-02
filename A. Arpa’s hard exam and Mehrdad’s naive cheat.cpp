#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;
    int x = 1378 % 10, y = 1;
    while(n!=0)
    {
        if(n%2==1)
        {
            y = (y * x) % 10;
            n--;
        }
        else
        {
            x = (x * x) % 10;
            n /= 2;
        }
    }
    cout<<y<<endl;
}

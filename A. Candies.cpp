#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, y=3;
        cin >> n;
        for(int i=2; i<n; i++)
        {
            if(n%y==0)
            {
                cout<<n/y<<endl;
                break;
            }
            y += pow(2, i);
        }
    }
}

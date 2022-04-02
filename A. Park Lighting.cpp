#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        if(n%2==0)
            cout<<(n/2)*m<<endl;
        else
        {
            if(m%2!=0)
                cout<<((n/2)*m)+((m/2)+1)<<endl;
            else
                cout<<((n/2)*m)+(m/2)<<endl;
        }
    }
}

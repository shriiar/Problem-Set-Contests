#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, d;
        cin >> a >> d;
        if(d>a)
        {
            cout<<d-a<<endl;
        }
        else
        {
            if((a%2) == (d%2))
                cout<<"0"<<endl;
            else
                cout<<"1"<<endl;
        }
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if(a==b)
            cout<<"0"<<endl;
        else
        {
            int y =abs(b - a), x;
            x = y / 10;
            if(y%10!=0)
                cout<<x+1<<endl;
            else
                cout<<x<<endl;
        }
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        bool f =true;
        if(x==y && y==z && x==z)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        else if(x==y && z<x)
        {
            cout<<"YES"<<endl;
            cout<<z<<" "<<z<<" "<<x<<endl;
        }
        else if(y==z && x<y)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<x<<" "<<y<<endl;
        }
        else if(x==z && y<z)
        {
            cout<<"YES"<<endl;
            cout<<y<<" "<<y<<" "<<z<<endl;
        }
        else
            f = false;
        if(f==false)
            cout<<"NO"<<endl;
    }
}

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
        int x, y;
        cin >> x >> y;
        if(x==y)
            cout<<x*2<<endl;
        else if(x==0 && y!=0)
            cout<<(y*2)-1<<endl;
        else if(y==0 && x!=0)
            cout<<(x*2)-1<<endl;
        else if(x==0 && y==0)
            cout<<"0"<<endl;
        else
        {
            if(y>x)
                swap(x, y);
            long long c = 0;
            if(x-y==1)
                cout<<x+y<<endl;
            else
            {
                c += (y*2);
                c += ((x*2)-1) - (y*2);
                cout<<c<<endl;
            }
        }
    }
}

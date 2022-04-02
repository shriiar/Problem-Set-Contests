#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    if(t==1 || t==2)
    {
        string s;
        while(t--)
            cin >> s;
        cout<<s<<endl;
    }
    else
    {
        string s, p, z;
        int x = 1, y = 0;
        cin >> s;
        t--;
        bool f = true;
        while(t--)
        {
            cin >> z;
            if(z!=s && f==true)
            {
                p = z;
                f = false;
                y++;
            }
            else if(p==z)
                y++;
            else
                x++;
        }
        if(x>y)
            cout<<s<<endl;
        else
            cout<<p<<endl;
    }
}

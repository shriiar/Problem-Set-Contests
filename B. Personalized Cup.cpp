#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int n, r, i=0, x, c, y, z;
    n = s.size();
    if(n<=20) cout<<1<<" "<<n<<endl<<s<<endl;
    else
    {
        if(n>=21 && n<=40) r=n%2, n/=2, z=2;
        else if(n>=41 && n<=60) r=n%3, n/=3, z=3;
        else if(n>=61 && n<=80) r=n%4, n/=4, z=4;
        else r=n%5, n/=5, z=5;
        if(r==0) y = n;
        else y = n+1;
        cout<<z<<" "<<y<<endl;
        if(r!=0)
        {
            z -= r;
            while(z--)
            {
                c = n;
                while(c--)
                    cout<<s[i], i++;
                cout<<"*"<<endl;
            }
            while(r--)
            {
                c = n+1;
                while(c--)
                    cout<<s[i], i++;
                cout<<endl;
            }
        }
        else
        {
            while(z--)
            {
                c = n;
                while(c--)
                    cout<<s[i], i++;
                cout<<endl;
            }
        }
    }
    return 0;
}

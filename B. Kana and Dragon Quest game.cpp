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
        int x, n, m;
        cin >> x >> n >> m;
        bool f = true;
        if(x<=10 && m!=0)
            cout<<"YES"<<endl;
        else
        {
            while(n!=0)
            {
                if(x<=0)
                {
                    f = false;
                    break;
                }
                x /= 2;
                x += 10;
                n--;
            }
            if(f==true)
            {
                while(m!=0)
                {
                    if(x<=0)
                    {
                        f = false;
                        break;
                    }
                    x -= 10;
                    m--;
                }
            }
            if(x<=0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if(n==7)
        cout<<"ROYGBIV"<<endl;
    else
    {
        bool f = true;
        while(n>0)
        {
            if(f==true)
            {
                cout<<"ROYGBIV";
                f = false;
                n -= 7;
            }
            else
            {
                if(n-4>=0)
                {
                    cout<<"GBIV";
                    n -= 4;
                }
                else
                {
                    if(n-3==0)
                    {
                        cout<<"GBI"<<endl;
                        break;
                    }
                    else if(n-2==0)
                    {
                        cout<<"GB"<<endl;
                        break;
                    }
                    else if(n-1==0)
                    {
                        cout<<"G"<<endl;
                        break;
                    }
                    else if(n==0)
                        break;
                }
            }
        }
    }
}

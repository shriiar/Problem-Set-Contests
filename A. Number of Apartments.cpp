#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n%3==0)
            cout<<n/3<<" "<<"0"<<" "<<"0"<<endl;
        else if(n%5==0)
            cout<<"0"<<" "<<n/5<<" "<<"0"<<endl;
        else if(n%7==0)
            cout<<"0"<<" "<<"0"<<" "<<n/7<<endl;
        else
        {
            if(n<3)
                cout<<"-1"<<endl;
            else
            {
                int z = n;
                int three = 0;
                while(1)
                {
                    z -= 3;
                    three++;
                    if(z%5==0)
                    {
                        cout<<three<<" "<<z/5<<" "<<"0"<<endl;
                        break;
                    }
                    if(z<3)
                    {
                        cout<<"-1"<<endl;
                        break;
                    }
                }
            }
        }
    }
}

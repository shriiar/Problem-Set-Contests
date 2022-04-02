1#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        if(n!=0)
        {
            if(n<=3)
                cout<<"1"<<endl;
            else
            {
                n = n / 2;
                cout<<n<<endl;
            }
        }
        else
            break;
    }
}

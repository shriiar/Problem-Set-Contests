#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b;
        cin >> a >> b;
        if(a%b==0)
            cout<<"0"<<endl;
        else
        {
            a = a%b;
            cout<<b-a<<endl;
        }
    }
}

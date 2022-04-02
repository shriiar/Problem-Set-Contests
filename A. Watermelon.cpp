#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin >> w;
    if(w<4)
    {
        cout<<"NO"<<endl;
    }
    if(w>=4)
    {
        if(w%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

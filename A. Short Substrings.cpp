#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string b;
        cin >> b;
        for(int i=0; i<b.size(); i++)
        {
            if(i==b.size()-1)
                cout<<b[i];
            else if(i%2==0)
                cout<<b[i];
        }
        cout<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int x = s.size(), c=0;
        for(int i=0; i<x; i++)
        {
            if(s[i]!='0')
                c++;
        }
        cout<<c<<endl;
        for(int i=0; i<x; i++)
        {
            if(s[i]!='0')
            {
                cout<<s[i];
                for(int j=i+1; j<x; j++)
                {
                    cout<<"0";
                }
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

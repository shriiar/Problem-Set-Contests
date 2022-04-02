#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    char c;
    while(cin >> s)
    {
        for(int i=0; i<s.size(); i++)
        {
            n=s[i];
            c=n-7;
            cout<<c;
        }
        cout<<endl;
    }
}

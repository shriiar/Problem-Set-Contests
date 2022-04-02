#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        int x=s.size();
        if(x<=10)
            cout<<s;
        else
            cout<<s[0]<<x-2<<s[x-1];
        cout<<endl;
    }

}

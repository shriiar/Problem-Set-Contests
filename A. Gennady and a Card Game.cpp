#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x = s.size();
    for(int i=0; i<5; i++)
    {
        string a;
        cin >> a;
        int y = a.size();
        if(s[x-2]==a[y-2])
        {
            cout<<"YES"<<endl;
            break;
        }
        else if(s[x-1]==a[y-1])
        {
            cout<<"YES"<<endl;
            break;
        }
        else if(i==4)
            cout<<"NO"<<endl;
    }
}

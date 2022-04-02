#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int w = s.size(), c=0, z;
    for(int i=0; i<w; i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            c++;
        }
    }
    int y = c;
    while(y!=0)
    {
        int x = y % 10;
        y = y / 10;
        if(x==4 || x==7)
        {
            z=0;
            continue;
        }
        else
        {
            z=1;
            break;
        }
    }
    if(z==0 && c!=0)
        cout<<"YES"<<endl;
    else if(z==1 && c!=0)
        cout<<"NO"<<endl;
    else if(c==0)
        cout<<"NO"<<endl;
}

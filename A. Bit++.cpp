#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x=0;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int w=s.size();
        for(int i=0; i<w-1; i++)
        {
            if(s[i]=='+' && s[i+1]=='+')
            {
                x++;
                break;
            }
            if(s[i]=='-' && s[i+1]=='-')
            {
                x--;
                break;
            }
            if(s[i]=='X')
                continue;
        }
    }
    cout<<x<<endl;
}

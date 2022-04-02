#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x = 0, y = 0, z = 0;
    string s;
    bool f = true;
    cin >> s >> n;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='*')
            x++;
        else if(s[i]=='?')
            y++;
        else
            z++;
    }
    if((n<z-x-y) || (n>z && x==0))
        cout<<"Impossible"<<endl;
    else if(n<z)
    {
        string t;
        int p = z - n;
        for(int i=0; i<s.size(); i++)
        {
            if(p!=0)
            {
                if(s[i]=='?' || s[i]=='*')
                {
                    t.pop_back();
                    p--;
                }
                else
                    t += s[i];
            }
            else if(s[i]!='*' && s[i]!='?')
                t += s[i];
        }
        cout<<t<<endl;
    }
    else
    {
        string t;
        int p = n - z;
        for(int i=0; i<s.size(); i++)
        {
            if(f==true && s[i]=='*')
            {
                while(p!=0)
                {
                    t += s[i-1];
                    p--;
                }
                f = false;
            }
            else if(s[i]!='*' && s[i]!='?')
                t += s[i];
        }
        cout<<t<<endl;
    }
}

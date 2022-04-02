#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string s, t;
        cin >> s >> t;
        if(s.size()>t.size())
            cout<<"NO"<<endl;
        else if(s==t)
            cout<<"YES"<<endl;
        else
        {
            int i = 0, p = 0;
            bool f = true;
            for(i=0; i<t.size(); i++)
            {
                if(s[p]==t[i])
                    p++;
                else
                {
                    if(i!=0 && t[i-1]==t[i])
                        continue;
                    else
                    {
                        f = false;
                        break;
                    }
                }
            }
            if(f)
            {
                if(p==s.size())
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
}

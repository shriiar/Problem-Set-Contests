#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int q = 0, p = 0;
        if(s[0]==')' || s[s.size()-1]=='(')
            cout<<"NO"<<endl;
        else
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='?')
                    q++;
                if(s[i]=='/')
                    p++;
            }
            q += p;
            if(q%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}

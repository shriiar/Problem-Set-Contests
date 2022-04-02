#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        if(n==1)
            cin >> s;
        else
        {
            for(int i=1; i<=n; i++)
            {
                string t;
                cin >> t;
                s += t;
            }
            sort(s.begin(), s.end());
        }
        int c = 1, j = 1;
        bool f = true;
        char a = s[0];
        for(int i=j; i<s.size(); i++)
        {
            if(a==s[i])
                c++;
            else
            {
                if(c%n!=0)
                {
                    f = false;
                    break;
                }
                else if(c%n==0)
                {
                    c = 1;
                    a = s[i];
                }
            }
        }
        if(c%n!=0)
            cout<<"NO"<<endl;
        else if(f==true)
            cout<<"YES"<<endl;
        else if(f==false)
            cout<<"NO"<<endl;
    }
}

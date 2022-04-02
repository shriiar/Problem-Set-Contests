#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, y;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i] += 32;
    }
    if(s.size()<26)
        cout<<"NO"<<endl;
    else
    {
        sort(s.begin(), s.end());
        char c = 'a';
        while(c<='z')
        {
            for(int i=0; i<s.size(); i++)
            {
                if(c==s[i])
                {
                    y=1;
                    break;
                }
                else if(c!=s[i] && i==s.size()-1)
                {
                    y=0;
                    break;
                }
            }
            if(y==0)
                break;
            c++;
        }
        if(y==1)
            cout<<"YES"<<endl;
        if(y==0)
            cout<<"NO"<<endl;
    }
}

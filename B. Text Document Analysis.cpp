#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, c = 0, z = 0, x = 0;
    cin >> n;
    string s;
    cin >> s;
    vector <int> v;
    for(int i=0; i<n; i++)
        s[i] = tolower(s[i]);
    for(int i=0; i<n; i++)
    {
        if(s[i]>='a' && s[i]<='z')
            c++;
        else if(s[i]=='_' && s[i]!='(')
        {
            v.push_back(c);
            c = 0;
        }
        if(s[i]=='(')
        {
            for(int j=i; j<n; j++)
            {
                if(s[j]==')')
                {
                    i = j;
                    break;
                }
            }
            v.push_back(c);
            c = 0;
        }
    }
    v.push_back(c);
    c = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='(')
        {
            for(int j=i+1; j<n; j++)
            {
                if(s[j]>='a' && s[j]<='z')
                    c++;
                else if(c>0 && s[j]!=')' && s[j]=='_')
                {
                    x++;
                    c = 0;
                }
                else if(s[j]==')')
                {
                    if(c>0)
                    {
                        x++;
                        c = 0;
                    }
                    i = j;
                    break;
                }
            }
        }
    }
    z = *max_element(v.begin(), v.end());
    cout<<z<<" "<<x<<endl;
}

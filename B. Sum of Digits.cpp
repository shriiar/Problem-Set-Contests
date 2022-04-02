#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    long long int ss = 0;
    int c = 0;
    cin >> s;
    if(s.size()==1)
        cout<<c<<endl;
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            int x = s[i] - '0';
            ss += x;
        }
        c++;
        while(ss>9)
        {
            int y = ss;
            ss = 0;
            while(y!=0)
            {
                int x = y % 10;
                ss += x;
                y /= 10;
            }
            c++;
        }
        cout<<c<<endl;
    }
}

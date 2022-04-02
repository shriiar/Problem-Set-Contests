#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int c = 0;
    for(int i=0; i<t.size(); i++)
    {
        if(t[i]==s[c])
            c++;
    }
    cout<<c+1<<endl;
}

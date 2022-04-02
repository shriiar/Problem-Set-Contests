#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x=s.size();
    if(s[0]>='a' && s[0]<='z')
    {
        s[0]=s[0]-32;
    }
    cout<<s;
}

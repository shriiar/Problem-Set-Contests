#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char a = 'a';
    int c=0, l=26;
    for(int i=0; i<s.size(); i++)
    {
       c += min(abs(s[i]-a), l-abs(s[i]-a));
       a = s[i];
    }
    cout<<c<<endl;
}

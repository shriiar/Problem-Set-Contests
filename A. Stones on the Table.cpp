#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, c=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
        }
    }
    cout<<c<<endl;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = s.size(), a=0, d=0;
    for(int i=0; i<x; i++)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='D')
            d++;
    }
    if(a>d)
        cout<<"Anton"<<endl;
    else if(a<d)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
}

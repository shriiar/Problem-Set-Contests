#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int X = 0, Y = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='x')
            X++;
        else
            Y++;
    }
    if(X>Y)
    {
        X -= Y;
        for(int i=0; i<X; i++)
            cout<<"x";
        cout<<endl;
    }
    else
    {
        Y -= X;
        for(int i=0; i<Y; i++)
            cout<<"y";
        cout<<endl;
    }
}

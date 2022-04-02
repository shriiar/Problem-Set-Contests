#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack <int> a, b;
    int n;
    while(cin >> n)
    {
        a.push(n);
    }
    while(!a.empty())
    {
        b.push(a.top());
        a.pop();
    }
    if(b.size()>2)
        cout<<"output:";
    else
        cout<<"output";
    while(!b.empty())
    {
        cout<<" "<<b.top();
        b.pop();
    }
    cout<<".";
}

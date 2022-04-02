#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack <int> s;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    for(int i=0; i<n; i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

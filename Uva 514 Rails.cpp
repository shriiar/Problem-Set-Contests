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
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x = s.top();
        v.push_back(x);
        s.pop();
    }
}

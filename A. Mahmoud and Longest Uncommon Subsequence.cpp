#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, k;
    cin >> s >> k;
    if(s==k)
        cout<<"-1"<<endl;
    else
    {
        int x = max(s.size(), k.size());
        cout<<x<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, k, l;
    cin >> s >> k >> l;
    string x = s + k;
    sort(x.begin(), x.end());
    sort(l.begin(), l.end());
    if(x==l)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

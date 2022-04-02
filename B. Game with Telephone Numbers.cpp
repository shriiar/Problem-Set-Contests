#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, c = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<=s.size()-11; i++)
    {
        if(s[i]=='8')
            c++;
    }
    if(c>(n-11)/2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

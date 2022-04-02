#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, l = 0, r = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='L')
            l++;
        else
            r++;
    }
    cout<<r+l+1<<endl;
}

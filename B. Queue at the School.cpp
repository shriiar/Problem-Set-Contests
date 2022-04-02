#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;
    while(t--)
    {
        for(int j=0; j<n-1; j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j], s[j+1]);
                j++;
            }
        }
    }
    cout<<s<<endl;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]==s[i+1])
                c++;
        }
        cout<<(c+1)/2<<endl;
    }
}

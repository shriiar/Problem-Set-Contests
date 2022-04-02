#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n, c = 0;
        cin >> n;
        string s;
        cin >> s;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]==')')
                c++;
            else
                break;
        }
        int x = s.size() - c;
        if(x>=c)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

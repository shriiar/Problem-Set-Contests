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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while(q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            if(l==0 && r==n-1)
                cout<<"NO"<<endl;
            else
            {
                bool f = true, g = true;
                char x = s[r];
                for(int i=r+1; i<n; i++)
                {
                    if(s[i]==x)
                    {
                        cout<<"YES"<<endl;
                        f = false;
                        break;
                    }
                }
                if(f==true)
                {
                    x = s[l];
                    for(int i=0; i<l; i++)
                    {
                        if(s[i]==x)
                        {
                            cout<<"YES"<<endl;
                            g = false;
                            break;
                        }
                    }
                    if(g==true)
                        cout<<"NO"<<endl;
                }
            }
        }
    }
}

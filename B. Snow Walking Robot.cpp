#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int u = 0, d = 0, l = 0, r = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='U')
                u++;
            else if(s[i]=='D')
                d++;
            else if(s[i]=='L')
                l++;
            else
                r++;
        }
        if(u!=0 && d!=0 && l!=0 && r!=0)
        {
            cout<<2*(min(u, d))+2*(min(l, r))<<endl;
            for(int i=0; i<(min(u, d)); i++)
                cout<<"U";
            for(int i=0; i<(min(l, r)); i++)
                cout<<"R";
            for(int i=0; i<(min(u, d)); i++)
                cout<<"D";
            for(int i=0; i<(min(l, r)); i++)
                cout<<"L";
            cout<<endl;
        }
        else if(u!=0 && d!=0 && (l==0 || r==0))
        {
            cout<<2<<endl;
            cout<<"UD"<<endl;
        }
        else if(l!=0 && r!=0 && (u==0 || d==0))
        {
            cout<<2<<endl;
            cout<<"LR"<<endl;
        }
        else
            cout<<0<<endl;
    }
}

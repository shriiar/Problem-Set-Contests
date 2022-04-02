#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector <char> v(n, 'X');
    if(n%2!=0)
    {
        int x = (n/2)-1, y = (n/2)+1, z = (n/2);
        v[z] = s[0];
        for(int i=1; i<n-1; i++)
        {
            v[x] = s[i];
            v[y] = s[i+1];
            i++;
            x--;
            y++;
        }
        for(int i=0; i<n; i++)
            cout<<v[i];
        cout<<endl;
    }
    else
    {
        int x = (n/2), y = (n/2)-2, z = (n/2)-1;
        v[z] = s[0];
        for(int i=1; i<n; i++)
        {
            v[x] = s[i];
            v[y] = s[i+1];
            i++;
            x++;
            y--;
        }
        for(int i=0; i<n; i++)
            cout<<v[i];
        cout<<endl;
    }
}

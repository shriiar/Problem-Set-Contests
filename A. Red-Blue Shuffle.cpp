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
        int n, r1 = 0, b1 = 0;
        cin >> n;
        string s, t;
        cin >> s >> t;
        for(int i=0; i<n; i++)
        {
            if(s[i]>t[i])
                r1++;
            else if(s[i]<t[i])
                b1++;
        }
        if(r1>b1)
            cout<<"RED"<<endl;
        else if(b1>r1)
            cout<<"BLUE"<<endl;
        else
            cout<<"EQUAL"<<endl;
    }
}

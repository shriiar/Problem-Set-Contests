#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, a = 0, i = 0, f = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int j=0; j<n; j++)
    {
        if(s[j]=='A')
            a++;
        else if(s[j]=='I')
            i++;
        else
            f++;
    }
    if(i==0 && a!=0 && f!=0)
        cout<<a<<endl;
    else if(i>1)
        cout<<"0"<<endl;
    else if(i==1 && (f!=0 || a!=0))
        cout<<i<<endl;
    else if(i==1 && a!=0 && f!=0)
        cout<<i<<endl;
    else if(i==0 && a==0 && f!=0)
        cout<<"0"<<endl;
    else if(i==0 && a!=0 && f==0)
        cout<<a<<endl;
}

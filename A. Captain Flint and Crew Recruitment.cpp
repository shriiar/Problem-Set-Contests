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
        if(n>30 && n!=36 && n!=40 && n!=44)
            cout<<"YES"<<endl<<"6 10 14 "<<n-30<<endl;
        else if(n==36)
            cout<<"YES"<<endl<<"5 6 10 15"<<endl;
        else if(n==44)
            cout<<"YES"<<endl<<"6 7 10 21"<<endl;
        else if(n==40)
            cout<<"YES"<<endl<<"6 10 15 9"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

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
        int n;
        cin >> n;
        if(n<2020)
            cout<<"NO"<<endl;
        else
        {
            int x = n;
            vector <int> v;
            while(1)
            {
                if(x-2020<0)
                    break;
                x -= 2020;
                v.push_back(2020);
            }
            if(x<=v.size())
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}

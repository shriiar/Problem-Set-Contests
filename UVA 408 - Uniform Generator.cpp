#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int step, mod;
    while(cin >> step >> mod)
    {
        vector <int> v;
        for(int i=0; i<mod; i++)
            v.push_back(i);
        vector <int> r;
        int y = 0, z = 0;
        while(y<mod)
        {
            z = (z + step) % mod;
            r.push_back(z);
            y++;
        }
        sort(r.begin(), r.end());
        bool f = true;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]!=r[i])
            {
                f = false;
                break;
            }
        }
        if(f==true)
            cout<<setw(10)<<step<<setw(10)<<mod<<"    "<<"Good Choice"<<endl<<endl;
        if(f==false)
            cout<<setw(10)<<step<<setw(10)<<mod<<"    "<<"Bad Choice"<<endl<<endl;
    }
}

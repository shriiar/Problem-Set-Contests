#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n, c = 0;
    bool f = true;
    cin >> n;
    vector <long long int> v;
    for(int i=0; i<n; i++)
    {
        long long int x;
        cin >> x;
        if(x%2!=0)
            f = false;
        v.push_back(x);
    }
    if(f==false)
        cout<<"0"<<endl;
    else
    {
        vector <long long int> b;
        for(int i=0; i<n; i++)
        {
            while(1)
            {
                if(v[i]%2!=0)
                    break;
                c++;
                v[i] /= 2;
            }
            b.push_back(c);
            c = 0;
        }
        cout<<*min_element(b.begin(), b.end())<<endl;
    }
}

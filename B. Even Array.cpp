#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int a=0, b=0;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x%2 != i%2)
            {
                if(i%2==0)
                    a++;
                else
                    b++;
            }
        }
        if(a!=b)
            cout<<"-1"<<endl;
        else
            cout<<a<<endl;
    }
}

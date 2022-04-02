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
        long long n, k;
        cin >> n >> k;
        if(n>=k)
        {
            if(n%2==0 && k%2==0)
            {
                cout<<"YES"<<endl;
                for(int i=0; i<k-1; i++)
                {
                    cout<<1<<" ";
                    n -= 1;
                }
                cout<<n<<endl;
            }
            else if(n%2==0 && k%2!=0 && n/2>=k)
            {
                cout<<"YES"<<endl;
                for(int i=0; i<k-1; i++)
                {
                    cout<<2<<" ";
                    n -= 2;
                }
                cout<<n<<endl;
            }
            else if(n%2!=0 && k%2!=0)
            {
                cout<<"YES"<<endl;
                for(int i=0; i<k-1; i++)
                {
                    cout<<1<<" ";
                    n -= 1;
                }
                cout<<n<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}

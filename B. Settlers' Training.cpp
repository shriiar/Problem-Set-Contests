#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if(v.size()==1)
        cout<<k-v[0]<<endl;
    else
    {
        int c = 0;
        while(1)
        {
            bool g = true, h = true;
            for(int i=v.size()-1; i>=0; i--)
            {
                if(v[i]==k)
                {
                    h = false;
                    continue;
                }
                else if(v[i]!=v[i-1])
                {
                    v[i]++;
                    h = true;
                }
                else if(v[i]==v[i-1])
                {
                    v[i]++;
                    h = true;
                    for(int j=i-1; j>=0; j--)
                    {
                        if(j==0)
                        {
                            g = false;
                            break;
                        }
                        if(v[j]!=v[j-1])
                        {
                            i = j;
                            break;
                        }
                    }
                    if(g==false)
                        break;
                }

            }
            if(h==true)
                c++;
            bool f = true;
            for(int i=0; i<v.size()-1; i++)
            {
                if(v[i]!=k)
                {
                    f = false;
                    break;
                }
            }
            if(f==true)
                break;
        }
        cout<<c<<endl;
    }
}

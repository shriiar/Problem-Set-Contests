#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    vector <int> s;
    vector <int> t;
    vector <int> ss;
    s.push_back(1);
    for(int i=2; i<=n; i++)
    {
        m = i;
        t.clear();
        if(m>9)
        {
            while(m!=0)
            {
                int z = m % 10;
                t.push_back(z);
                m /= 10;
            }
        }
        else
            t.push_back(m);
        int x = t[0], y, w = 0;
        for(int j=0; j<s.size(); j++)
        {
            y = s[j];
            w += (x * y);
            if(w>9)
            {
                int z = w % 10;
                ss.push_back(z);
                w /= 10;
            }
            else
            {
                ss.push_back(w);
                w = 0;
            }
        }
        if(w!=0)
            ss.push_back(w);
        if(t.size()==1)
        {
            s.clear();
            for(int k = 0; k<ss.size(); k++)
                s.push_back(ss[k]);
            ss.clear();
        }
        else
        {
            int q = 1, r = 1, a = 1, b = 1;
            for(int j=1; j<t.size(); j++)
            {
                x = t[j];
                w = 0;
                for(int k=0; k<s.size(); k++)
                {
                    y = s[k];
                    w += (x * y);
                    if(a<=ss.size()-1)
                    {
                        w += ss[q];
                        a++;
                        if(w>9)
                        {
                            ss[q] = w % 10;
                            q++;
                            w /= 10;
                        }
                        else
                        {
                            ss[q] = w;
                            q++;
                            w = 0;
                        }
                    }
                    else
                    {
                        if(w>9)
                        {
                            int z = w % 10;
                            ss.push_back(z);
                            w /= 10;
                        }
                        else
                        {
                            ss.push_back(w);
                            w = 0;
                        }
                    }
                    b++;
                    a = b;
                    r++;
                    q = r;
                }
            }
            if(w!=0)
                ss.push_back(w);
            s.clear();
            for(int k=0; k<ss.size(); k++)
                s.push_back(ss[k]);
            ss.clear();
        }
    }
    reverse(s.begin(), s.end());
    for(int i=0; i<s.size(); i++)
        cout<<s[i];
    cout<<endl;
}

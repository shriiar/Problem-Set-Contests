#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;

    while(cin >> s >> t)
    {
        if(s=="0" || t=="0")
            cout<<"0"<<endl;
        else
        {
            vector <int> ss;
            if(s.size()<t.size())
                swap(s, t);
            int x = t[t.size()-1] - '0', y;
            int w = 0;
            for(int j=s.size()-1; j>=0; j--)
            {
                y = s[j] - '0';
                w = w + (x * y);
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
                reverse(ss.begin(), ss.end());
                for(int i=0; i<ss.size(); i++)
                    cout<<ss[i];
                cout<<endl;
                ss.clear();
            }
            else
            {
                int q = 1, r = 1, a = 1, b = 1;
                for(int i=t.size()-2; i>=0; i--)
                {
                    x = t[i] - '0';
                    int w = 0;
                    for(int j=s.size()-1; j>=0; j--)
                    {
                        y = s[j] - '0';
                        w = w + (x * y);
                        if(a<=ss.size()-1)
                        {
                            w += ss[q];
                            a++;
                            if(w>9)
                            {
                                ss[q] = w % 10;
                                w /= 10;
                                q++;
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
                    }
                    b++;
                    a = b;
                    r++;
                    q = 0;
                    q = r;
                    if(w!=0)
                        ss.push_back(w);
                }
                reverse(ss.begin(), ss.end());
                for(int i=0; i<ss.size(); i++)
                    cout<<ss[i];
                cout<<endl;
                ss.clear();
            }
        }
    }
}

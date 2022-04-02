#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector <char> k;
    getline(cin, s);
    int z = s.size(), x, y=0;
    for(int i=0; i<z; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            char f;
            f = s[i];
            k.push_back(f);
        }
    }
    sort(k.begin(), k.end());
    char a = 'a';
    while(a<='z')
    {
        for(int j=0; j<k.size(); j++)
        {
            if(a==k[j])
            {
                x=1;
                break;
            }
            else
                x=0;
        }
        if(x==1)
            y++;
        a++;
    }
    cout<<y<<endl;
}

#include <bits/stdc++.h>
using namespace std;
signed main()
{
    vector<pair<char, string>> v;
    v.push_back(make_pair('A', "00"));
    v.push_back(make_pair('B', "010"));
    v.push_back(make_pair('C', "011"));
    v.push_back(make_pair('D', "1110"));
    v.push_back(make_pair('E', "10"));
    v.push_back(make_pair('F', "11000010"));
    v.push_back(make_pair('G', "11000011"));
    v.push_back(make_pair('H', "11010"));
    v.push_back(make_pair('I', "1111"));
    v.push_back(make_pair('J', "11001000"));
    v.push_back(make_pair('K', "11001001"));
    v.push_back(make_pair('L', "110011"));
    v.push_back(make_pair('M', "11001010"));
    v.push_back(make_pair('N', "110001"));
    v.push_back(make_pair('O', "11001011"));
    v.push_back(make_pair('P', "11011011"));
    v.push_back(make_pair('Q', "11000001"));
    v.push_back(make_pair('R', "11011110"));
    v.push_back(make_pair('S', "1101110"));
    v.push_back(make_pair('T', "11011111"));
    v.push_back(make_pair('U', "11011010"));
    v.push_back(make_pair('V', "11011000"));
    v.push_back(make_pair('W', "110000000"));
    v.push_back(make_pair('X', "110000001"));
    v.push_back(make_pair('Y', "110110010"));
    v.push_back(make_pair('Z', "110110011"));
    string s;
    while(cin >> s)
    {
        if(s.size() == 1 && s[0] == '#') break;
        for(int i = 0; i < s.size(); i++)
        {
            for(int j = 0; j < v.size(); j++)
            {
                if(s[i] == v[j].first)
                {
                    cout << v[j].second;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
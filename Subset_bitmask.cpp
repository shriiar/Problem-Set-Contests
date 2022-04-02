#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod 1000000007
#define fr first
#define se second

#define vi vector <int>
#define vb vector <bool>
#define vl vector <ll>
#define vpi vector <pair<int, int>>
#define vpl vector <pair<ll, ll>>
#define vplb vector <pair<ll, bool>>
#define vpib vector <pair<int, bool>>
#define vvi vector <vector<int>>
#define vvl vector <vector<ll>>
#define seti set <int>
#define setl set <ll>
#define mapl map <ll, ll>
#define mapi map <int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i,n) for (ll i=0;i<n;i++)
#define for1(i,n) for (ll i=1;i<=n;i++)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
signed main()
{
    Fastio;
    int n;
    cin >> n;
    vi v;
    for0(i, n)
    {
        int val;
        cin >> val;
        v.pb(val);
    }
    for(ll m = 1; m < pow(2, n); m++)
    {
        for0(i, n)
        {
            if(m & (1 << i)) cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// // C++ program to find all subsets of given set. Any
// // repeated subset is considered only once in the output
// #include <bits/stdc++.h>
// using namespace std;
 
// // Utility function to split the string using a delim. Refer -
// // http://stackoverflow.com/questions/236129/split-a-string-in-c
// vector<string> split(const string &s, char delim)
// {
//     vector<string> elems;
//     stringstream ss(s);
//     string item;
//     while (getline(ss, item, delim))
//         elems.push_back(item);
 
//     return elems;
// }
 
// // Function to find all subsets of given set. Any repeated
// // subset is considered only once in the output
// int printPowerSet(int arr[], int n)
// {
//     vector<string> list;
 
//     /* Run counter i from 000..0 to 111..1*/
//     for (int i = 0; i < (int) pow(2, n); i++)
//     {
//         string subset = "";
 
//         // consider each element in the set
//         for (int j = 0; j < n; j++)
//         {
//             // Check if jth bit in the i is set. If the bit
//             // is set, we consider jth element from set
//             if ((i & (1 << j)) != 0)
//                 subset += to_string(arr[j]) + "|";
//         }
 
//         // if subset is encountered for the first time
//         // If we use set<string>, we can directly insert
//         if (find(list.begin(), list.end(), subset) == list.end())
//             list.push_back(subset);
//     }
 
//     // consider every subset
//     for (string subset : list)
//     {
//         // split the subset and print its elements
//         vector<string> arr = split(subset, '|');
//         for (string str: arr)
//             cout << str << " ";
//         cout << endl;
//     }
// }
 
// // Driver code
// int main()
// {
//     int arr[] = { 10, 12, 12 };
//     int n = sizeof(arr)/sizeof(arr[0]);
 
//     printPowerSet(arr, n);
 
//     return 0;
// }
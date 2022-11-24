#include <iostream>
#include <vector>
#include <string>
#define ll long long int
#define big 1000000007
using namespace std;

int ck[100001];

int c(int k, string s)
{
    if(k == 0)
    {
        return 0;
    }
    char dernier = s.back();
    if(dernier != 'n' || dernier != 'u')
    {
        return c(k - 1, s);
    }
    else
    {
        return c(k-1, s) + c(k - 2, s);
    }

}


int solve(string s)
{
    ck[0] = 1;
    ck[1] = 1;
    if (s[0] == 'w' || s[0]=='m') return 0;

    for(int i = 1; i < s.size(); i++)
    {
        if (s[i] == 'w' || s[i]=='m'){
            return 0;
        }
        if(s[i] == s[i-1] && (s[i] == 'u' || s[i] == 'n'))
        {
            ck[i] += (ck[i-1] + ck[i-2]) % big; 
        }
        else
        {
            ck[i] = ck[i -1];
        }
    }
    return(ck[s.length()-1]);
}


int main()
{
    ll sol;
    string s;
    cin >> s;

    sol = solve(s);

    cout << sol << "\n";

    return 0;
}
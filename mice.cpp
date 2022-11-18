#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    Problem Save More Mice: https://codeforces.com/problemset/problem/1593/C
*/

int solve(int n, vector<int> x)
{
    vector<int> dif;
    for(int elem : x)
    {
        dif.push_back(n - elem);
    }
    
    sort(dif.begin(), dif.end());

    int sol = 0;
    int cases = 0;

    for(int elem : dif)
    {
        cases += elem;
        if(cases > n - 1)
        {
            return sol;
        }
        sol ++;
    }

    return sol;
}



int main()
{
    int t, n, k;

    vector<int> sols;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector<int> x(k);
        for(int i = 0; i < k; i++) cin >> x[i];
        sols.push_back(solve(n,x));
    }

    for(int i = 0; i < sols.size(); i++) cout << sols[i] << "\n";
}
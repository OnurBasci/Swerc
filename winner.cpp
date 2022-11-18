#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/*
    Everyone is a Winner!: https://codeforces.com/contest/1263/problem/C
*/


vector<int> solve(int n)
{
    vector <int> v;
    v.push_back(0);
    //prmeier phase
    int s = (int) sqrt(n);

    int i;

    int last;

    for(int i = 1 ; i < n/i; i++)
    {
        if(n/i > n/(i+1))
        {
            last = i;
            v.push_back(last);
        }
    }

    for(i = s; i > 0; i --)
    {
        v.push_back((int) n/i);
    }
    
    return v;
}


int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> v = solve(n);
        //affichage
        cout << v.size() << "\n";
        for(int i = 0; i < v.size(); i ++) cout << v[i] << " ";
        cout << "\n";
    }

}